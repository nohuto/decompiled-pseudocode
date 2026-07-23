/*
 * XREFs of PiDqIrpQueryCreate @ 0x1409F2380
 * Callers:
 *     PiDqDispatch @ 0x1409F1FF0 (PiDqDispatch.c)
 * Callees:
 *     IoSetActivityIdThread @ 0x140451750 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140459F90 (IoClearActivityIdThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PiDqQuerySerializeActionQueue @ 0x1408D04C0 (PiDqQuerySerializeActionQueue.c)
 *     PnpIsNullGuid @ 0x1408D0B80 (PnpIsNullGuid.c)
 *     PiDqQueryLock @ 0x1408D0BAC (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x1408D0C0C (PiDqQueryUnlock.c)
 *     PiDqQueryFreeActiveData @ 0x1408D1670 (PiDqQueryFreeActiveData.c)
 *     PiDqIrpComplete @ 0x1409F2684 (PiDqIrpComplete.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x1409F26F0 (PiDqQueryGetNextIoctlInfo.c)
 *     PiDqQueryValidateQueryData @ 0x1409F27A0 (PiDqQueryValidateQueryData.c)
 *     PiDqTraceQueryCreate @ 0x1409F2944 (PiDqTraceQueryCreate.c)
 */

__int64 __fastcall PiDqIrpQueryCreate(__int64 a1)
{
  __int64 v2; // r14
  KSPIN_LOCK v3; // rdi
  KSPIN_LOCK v4; // rsi
  struct _LIST_ENTRY *v5; // r15
  unsigned int v6; // r12d
  __int64 *v7; // r15
  int *v8; // rsi
  int v9; // eax
  int v10; // eax
  int ValidateQueryData; // ebx
  unsigned int v12; // r8d
  _DWORD *v13; // rsi
  __int64 v15; // [rsp+20h] [rbp-B8h]
  char v16; // [rsp+30h] [rbp-A8h]
  char v17; // [rsp+31h] [rbp-A7h]
  unsigned int v18; // [rsp+34h] [rbp-A4h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-A0h] BYREF
  struct _LIST_ENTRY *v20; // [rsp+40h] [rbp-98h]
  KSPIN_LOCK v21; // [rsp+48h] [rbp-90h]
  KSPIN_LOCK v22; // [rsp+50h] [rbp-88h]
  __int64 v23; // [rsp+58h] [rbp-80h]
  __int64 v24; // [rsp+60h] [rbp-78h]
  __int64 v25; // [rsp+68h] [rbp-70h]
  KSPIN_LOCK v26; // [rsp+70h] [rbp-68h]
  __int64 v27; // [rsp+78h] [rbp-60h]
  __int128 v28; // [rsp+80h] [rbp-58h] BYREF
  struct _LIST_ENTRY v29; // [rsp+90h] [rbp-48h] BYREF

  v25 = a1;
  v2 = *(_QWORD *)(a1 + 184);
  v23 = v2;
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 48) + 32LL);
  v22 = v3;
  v4 = v3;
  v21 = v3;
  v16 = 0;
  v5 = 0LL;
  v20 = 0LL;
  v24 = 0LL;
  v29 = 0LL;
  v17 = 0;
  v6 = 0;
  v18 = 0;
  v19 = 0;
  v28 = 0LL;
  if ( v3 )
  {
    v7 = (__int64 *)(a1 + 24);
    v27 = a1 + 24;
    if ( *(_QWORD *)(a1 + 24) )
    {
      PiDqQueryLock(v3);
      v8 = (int *)(v3 + 216);
      v26 = v3 + 216;
      v9 = *(_DWORD *)(v3 + 216);
      if ( (v9 & 8) != 0 )
      {
        ValidateQueryData = -1073741536;
      }
      else if ( (v9 & 0x10) != 0 || (v10 = v9 | 0x10, *v8 = v10, v16 = 1, (v10 & 4) != 0) )
      {
        ValidateQueryData = -1073741637;
      }
      else if ( *(_DWORD *)(v2 + 8) < 0x10u )
      {
        ValidateQueryData = -1073741789;
      }
      else
      {
        ValidateQueryData = MesDecodeBufferHandleCreate(*v7, *(unsigned int *)(v2 + 16), v3 + 16);
        if ( ValidateQueryData >= 0 )
        {
          NdrMesTypeDecode3(*(_QWORD *)(v3 + 16), "TP 3\a", &off_140001EE8, &off_140E06FE0, 0, v3 + 24);
          ValidateQueryData = PiDqQueryValidateQueryData(*(_QWORD *)(v3 + 24));
          if ( ValidateQueryData >= 0 )
          {
            if ( !PnpIsNullGuid(*(void **)(v3 + 24)) )
            {
              v29 = *(struct _LIST_ENTRY *)*(_QWORD *)(v3 + 24);
              v20 = IoSetActivityIdThread(&v29);
              v17 = 1;
            }
            PiDqTraceQueryCreate(v3);
            *v8 |= 4u;
          }
        }
      }
      PiDqQueryUnlock(v3);
      if ( ValidateQueryData >= 0 )
      {
        v12 = *(_DWORD *)(v2 + 8);
        if ( v12 <= 0x10 )
        {
          v6 = 16;
        }
        else
        {
          ValidateQueryData = PiDqQuerySerializeActionQueue(v3, *v7, v12, (int *)&v18, &v19);
          v6 = v18;
        }
      }
      v5 = v20;
      v4 = v21;
    }
    else
    {
      ValidateQueryData = -1073741811;
      v5 = 0LL;
    }
  }
  else
  {
    ValidateQueryData = -1073741637;
  }
  if ( v16 )
  {
    PiDqQueryLock(v3);
    if ( ValidateQueryData < 0 )
    {
      v13 = (_DWORD *)(v3 + 216);
      *(_DWORD *)(v3 + 216) |= 1u;
      PiDqQueryFreeActiveData(v3);
    }
    else
    {
      PiDqQueryGetNextIoctlInfo(v3, *(unsigned int *)(v2 + 8), v19, &v28);
      v13 = (_DWORD *)(v4 + 216);
    }
    *v13 &= ~0x10u;
    PiDqQueryUnlock(v3);
  }
  PiDqIrpComplete(a1, (unsigned int)ValidateQueryData, v6, &v28, v15);
  if ( v17 )
    IoClearActivityIdThread(v5);
  return (unsigned int)ValidateQueryData;
}
