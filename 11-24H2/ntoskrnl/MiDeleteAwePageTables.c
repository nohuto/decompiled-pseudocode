/*
 * XREFs of MiDeleteAwePageTables @ 0x140681C60
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MiDeleteEmptyPageTables @ 0x140405978 (MiDeleteEmptyPageTables.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

LONG_PTR __fastcall MiDeleteAwePageTables(_KPROCESS *Object)
{
  volatile _KAFFINITY_EX *ActiveProcessors; // rbp
  int v3; // r14d
  KIRQL v4; // al
  _QWORD *v5; // rcx
  unsigned __int8 v6; // r12
  unsigned __int64 j; // r8
  unsigned __int64 v8; // rcx
  __int64 *v9; // rdx
  __int64 *v10; // r9
  __int64 i; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  volatile signed __int32 *v17; // r10
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  _QWORD *v21; // rax
  _QWORD **v22; // rax
  unsigned __int64 v23; // rcx
  _QWORD *v24; // rcx
  _QWORD **v25; // rax
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rcx
  _OWORD v29[3]; // [rsp+28h] [rbp-60h] BYREF

  ActiveProcessors = Object[2].ActiveProcessors;
  memset(v29, 0, sizeof(v29));
  if ( Object == KeGetCurrentThread()->ApcState.Process )
  {
    v3 = 0;
  }
  else
  {
    KiStackAttachProcess(Object, 0, (__int64)v29);
    v3 = 1;
  }
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&ActiveProcessors[4].StaticBitmap[8]);
  v5 = (_QWORD *)ActiveProcessors[4].StaticBitmap[5];
  v6 = v4;
  j = 0LL;
  while ( v5 )
  {
    j = (unsigned __int64)v5;
    v5 = (_QWORD *)*v5;
  }
  while ( j )
  {
    if ( *(_QWORD *)(j + 48) && *(_BYTE *)(j + 64) >= 0x3Fu )
    {
      v8 = *(_QWORD *)(j + 48) - 1LL;
      v9 = *(__int64 **)(j + 56);
      if ( !*(_QWORD *)(j + 48) )
        goto LABEL_30;
      v10 = *(__int64 **)(j + 56);
      for ( i = *v9; ; i = *v10 )
      {
        v12 = ~i;
        if ( v12 != -1 )
          break;
        if ( ++v10 > &v9[v8 >> 6] )
          goto LABEL_30;
      }
      _BitScanForward64((unsigned __int64 *)&v12, ~v12);
      v13 = v12 + ((v10 - v9) << 6);
      if ( v13 > v8 || v13 == -1LL )
      {
LABEL_30:
        v22 = *(_QWORD ***)(j + 8);
        v23 = j;
        if ( v22 )
        {
          v24 = *v22;
          for ( j = *(_QWORD *)(j + 8); v24; v24 = (_QWORD *)*v24 )
            j = (unsigned __int64)v24;
        }
        else
        {
          while ( 1 )
          {
            j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !j || *(_QWORD *)j == v23 )
              break;
            v23 = j;
          }
        }
      }
      else
      {
        v14 = v13 & 0x1F;
        LOBYTE(v15) = 1;
        v16 = v13;
        v17 = (volatile signed __int32 *)v9 + (v13 >> 5);
        if ( v14 + 1 <= 0x20 )
        {
          v18 = ~(1 << v14);
LABEL_25:
          _InterlockedAnd(v17, v18);
          goto LABEL_26;
        }
        if ( (v13 & 0x1F) == 0 )
          goto LABEL_24;
        _InterlockedAnd(v17, ~(((1 << (32 - (v13 & 0x1F))) - 1) << v14));
        v15 = 1LL - (32 - (unsigned int)(v13 & 0x1F));
        ++v17;
        if ( v15 >= 0x20 )
        {
          v19 = v15 >> 5;
          v15 += -32LL * (v15 >> 5);
          do
          {
            *v17++ = 0;
            --v19;
          }
          while ( v19 );
        }
        if ( v15 )
        {
LABEL_24:
          v18 = -1 << v15;
          goto LABEL_25;
        }
LABEL_26:
        v20 = *(unsigned int *)(*(_QWORD *)(j + 24) + 24LL) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(j + 24) + 32LL) << 32);
        MiReleaseSpinLockShared((volatile signed __int32 *)&ActiveProcessors[4].StaticBitmap[8], v6);
        MiDeleteEmptyPageTables(
          (v16 << 21) + ((v20 & 0xFFFFFFFFFFFFFE00uLL) << 12),
          (v16 << 21) + ((v20 & 0xFFFFFFFFFFFFFE00uLL) << 12) + 0x1FFFFF,
          1);
        ExAcquireSpinLockShared((PEX_SPIN_LOCK)&ActiveProcessors[4].StaticBitmap[8]);
        v21 = (_QWORD *)ActiveProcessors[4].StaticBitmap[5];
        j = 0LL;
        while ( v21 )
        {
          j = (unsigned __int64)v21;
          v21 = (_QWORD *)*v21;
        }
      }
    }
    else
    {
      v25 = *(_QWORD ***)(j + 8);
      v26 = j;
      if ( v25 )
      {
        v27 = *v25;
        for ( j = *(_QWORD *)(j + 8); v27; v27 = (_QWORD *)*v27 )
          j = (unsigned __int64)v27;
      }
      else
      {
        while ( 1 )
        {
          j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !j || *(_QWORD *)j == v26 )
            break;
          v26 = j;
        }
      }
    }
  }
  ActiveProcessors[4].StaticBitmap[11] = 0LL;
  MiReleaseSpinLockShared((volatile signed __int32 *)&ActiveProcessors[4].StaticBitmap[8], v6);
  if ( v3 )
    KiUnstackDetachProcess((__int64)v29, 0);
  return ObfDereferenceObjectWithTag(Object, 0x68506D4Du);
}
