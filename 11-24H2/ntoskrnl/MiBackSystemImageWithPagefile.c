/*
 * XREFs of MiBackSystemImageWithPagefile @ 0x1407E8184
 * Callers:
 *     FsRtlSetDriverBacking @ 0x14070AC20 (FsRtlSetDriverBacking.c)
 *     MiBackSystemImageWithPagefile @ 0x1407E8184 (MiBackSystemImageWithPagefile.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockLoaderEntry @ 0x1402BBFE8 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402BC0A0 (MiLockLoaderEntry.c)
 *     MiGetBaseLoaderPortion @ 0x1404C96FC (MiGetBaseLoaderPortion.c)
 *     MiBackSingleImageWithPagefile @ 0x1407E8100 (MiBackSingleImageWithPagefile.c)
 *     MiBackSystemImageWithPagefile @ 0x1407E8184 (MiBackSystemImageWithPagefile.c)
 */

__int64 __fastcall MiBackSystemImageWithPagefile(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 BaseLoaderPortion; // r14
  int v6; // eax
  unsigned __int64 v7; // rbx
  int v8; // r13d
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 i; // rsi
  __int64 *v12; // r12
  __int64 v13; // r15
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF

  v15 = 0LL;
  BaseLoaderPortion = MiGetBaseLoaderPortion(a1);
  v6 = *(_DWORD *)(BaseLoaderPortion + 184);
  if ( (v6 & 0x60) != 0 )
  {
    if ( a2 )
      MiUnlockLoaderEntry(v4, 0);
    return 0LL;
  }
  else
  {
    if ( *(_QWORD *)(v4 + 112) && (v6 & 0x10) == 0 && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(v4 + 48)) )
      MiBackSingleImageWithPagefile(a1);
    v7 = *(_QWORD *)(a1 + 136);
    v8 = 0;
    if ( v7 == 1 || v7 == -2LL )
      goto LABEL_29;
    if ( (v7 & 1) != 0 )
    {
      *(_QWORD *)&v15 = 1LL;
      *((_QWORD *)&v15 + 1) = v7 & 0xFFFFFFFFFFFFFFFEuLL;
      v7 = (unsigned __int64)&v15;
    }
    *(_DWORD *)(BaseLoaderPortion + 184) |= 0x40u;
    v9 = (_QWORD *)(v7 + 8);
    v10 = *(_QWORD *)v7;
    for ( i = 0LL; i < v10; ++i )
    {
      if ( !*v9 )
        goto LABEL_28;
      if ( *(_QWORD *)(*v9 + 136LL) != 1LL )
        goto LABEL_16;
      ++v9;
    }
    if ( i == v10 )
      goto LABEL_28;
LABEL_16:
    if ( a2 )
      MiUnlockLoaderEntry(a1, 0);
    if ( i < *(_QWORD *)v7 )
    {
      v12 = (__int64 *)(v7 + 8 * (i + 1));
      do
      {
        v13 = *v12;
        if ( !*v12 )
          break;
        if ( *(_QWORD *)(v13 + 136) != 1LL )
        {
          if ( a2 )
            MiLockLoaderEntry(*v12, 0);
          v8 = MiBackSystemImageWithPagefile(v13, a2);
          if ( v8 < 0 )
            break;
        }
        ++i;
        ++v12;
      }
      while ( i < *(_QWORD *)v7 );
    }
    if ( a2 )
      MiLockLoaderEntry(a1, 0);
LABEL_28:
    *(_DWORD *)(BaseLoaderPortion + 184) &= ~0x40u;
    if ( v8 >= 0 )
LABEL_29:
      *(_DWORD *)(BaseLoaderPortion + 184) |= 0x20u;
    if ( a2 )
      MiUnlockLoaderEntry(a1, 0);
    return (unsigned int)v8;
  }
}
