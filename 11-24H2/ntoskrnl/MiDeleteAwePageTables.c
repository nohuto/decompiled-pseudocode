/*
 * XREFs of MiDeleteAwePageTables @ 0x140682E50
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiDeleteEmptyPageTables @ 0x1403C7ED4 (MiDeleteEmptyPageTables.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

LONG_PTR __fastcall MiDeleteAwePageTables(_KPROCESS *Object)
{
  volatile _KAFFINITY_EX *ActiveProcessors; // rbp
  int v3; // r14d
  KIRQL v4; // al
  unsigned __int64 v5; // r9
  _QWORD *v6; // rcx
  unsigned __int8 v7; // r12
  unsigned __int64 j; // r8
  unsigned __int64 v9; // rcx
  __int64 *v10; // rdx
  __int64 i; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  volatile signed __int32 *v16; // r10
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  _QWORD *v20; // rax
  _QWORD **v21; // rax
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rcx
  _QWORD **v24; // rax
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _OWORD v30[3]; // [rsp+28h] [rbp-60h] BYREF

  ActiveProcessors = Object[2].ActiveProcessors;
  memset(v30, 0, sizeof(v30));
  if ( Object == KeGetCurrentThread()->ApcState.Process )
  {
    v3 = 0;
  }
  else
  {
    KiStackAttachProcess(Object, 0, (__int64)v30);
    v3 = 1;
  }
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&ActiveProcessors[4].StaticBitmap[8]);
  v6 = (_QWORD *)ActiveProcessors[4].StaticBitmap[5];
  v7 = v4;
  j = 0LL;
  while ( v6 )
  {
    j = (unsigned __int64)v6;
    v6 = (_QWORD *)*v6;
  }
  while ( j )
  {
    if ( *(_QWORD *)(j + 48) && *(_BYTE *)(j + 64) >= 0x3Fu )
    {
      v9 = *(_QWORD *)(j + 48) - 1LL;
      v10 = *(__int64 **)(j + 56);
      if ( !*(_QWORD *)(j + 48) )
        goto LABEL_30;
      v5 = *(_QWORD *)(j + 56);
      for ( i = *v10; ; i = *(_QWORD *)v5 )
      {
        v12 = ~i;
        if ( v12 != -1 )
          break;
        v5 += 8LL;
        if ( v5 > (unsigned __int64)&v10[v9 >> 6] )
          goto LABEL_30;
      }
      _BitScanForward64((unsigned __int64 *)&v12, ~v12);
      v5 = v12 + ((__int64)(v5 - (_QWORD)v10) >> 3 << 6);
      if ( v5 > v9 || v5 == -1LL )
      {
LABEL_30:
        v21 = *(_QWORD ***)(j + 8);
        v22 = j;
        if ( v21 )
        {
          v23 = *v21;
          for ( j = *(_QWORD *)(j + 8); v23; v23 = (_QWORD *)*v23 )
            j = (unsigned __int64)v23;
        }
        else
        {
          while ( 1 )
          {
            j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !j || *(_QWORD *)j == v22 )
              break;
            v22 = j;
          }
        }
      }
      else
      {
        v13 = v5 & 0x1F;
        LOBYTE(v14) = 1;
        v15 = v5;
        v16 = (volatile signed __int32 *)v10 + (v5 >> 5);
        if ( v13 + 1 <= 0x20 )
        {
          v17 = ~(1 << v13);
LABEL_25:
          _InterlockedAnd(v16, v17);
          goto LABEL_26;
        }
        if ( (v5 & 0x1F) == 0 )
          goto LABEL_24;
        _InterlockedAnd(v16, ~(((1 << (32 - (v5 & 0x1F))) - 1) << v13));
        v14 = 1LL - (32 - (unsigned int)(v5 & 0x1F));
        ++v16;
        if ( v14 >= 0x20 )
        {
          v18 = v14 >> 5;
          v14 += -32LL * (v14 >> 5);
          do
          {
            *v16++ = 0;
            --v18;
          }
          while ( v18 );
        }
        if ( v14 )
        {
LABEL_24:
          v17 = -1 << v14;
          goto LABEL_25;
        }
LABEL_26:
        v19 = *(unsigned int *)(*(_QWORD *)(j + 24) + 24LL) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(j + 24) + 32LL) << 32);
        MiReleaseSpinLockShared((volatile signed __int32 *)&ActiveProcessors[4].StaticBitmap[8], v7, j, v5);
        MiDeleteEmptyPageTables(
          (v15 << 21) + ((v19 & 0xFFFFFFFFFFFFFE00uLL) << 12),
          (v15 << 21) + ((v19 & 0xFFFFFFFFFFFFFE00uLL) << 12) + 0x1FFFFF,
          1);
        ExAcquireSpinLockShared((PEX_SPIN_LOCK)&ActiveProcessors[4].StaticBitmap[8]);
        v20 = (_QWORD *)ActiveProcessors[4].StaticBitmap[5];
        j = 0LL;
        while ( v20 )
        {
          j = (unsigned __int64)v20;
          v20 = (_QWORD *)*v20;
        }
      }
    }
    else
    {
      v24 = *(_QWORD ***)(j + 8);
      v25 = j;
      if ( v24 )
      {
        v26 = *v24;
        for ( j = *(_QWORD *)(j + 8); v26; v26 = (_QWORD *)*v26 )
          j = (unsigned __int64)v26;
      }
      else
      {
        while ( 1 )
        {
          j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !j || *(_QWORD *)j == v25 )
            break;
          v25 = j;
        }
      }
    }
  }
  ActiveProcessors[4].StaticBitmap[11] = 0LL;
  MiReleaseSpinLockShared((volatile signed __int32 *)&ActiveProcessors[4].StaticBitmap[8], v7, 0LL, v5);
  if ( v3 )
    KiUnstackDetachProcess((__int64)v30, 0, v27, v28);
  return ObfDereferenceObjectWithTag(Object, 0x68506D4Du);
}
