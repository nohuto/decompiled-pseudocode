/*
 * XREFs of PiDqIrpQueryCreate @ 0x140837A74
 * Callers:
 *     PiDqDispatch @ 0x1408377C0 (PiDqDispatch.c)
 * Callees:
 *     IoSetActivityIdThread @ 0x14045CC40 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140464140 (IoClearActivityIdThread.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PiDqIrpComplete @ 0x140837D78 (PiDqIrpComplete.c)
 *     PiDqQuerySerializeActionQueue @ 0x140837DE4 (PiDqQuerySerializeActionQueue.c)
 *     PnpIsNullGuid @ 0x140838480 (PnpIsNullGuid.c)
 *     PiDqQueryLock @ 0x1408384AC (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x14083850C (PiDqQueryUnlock.c)
 *     PiDqQueryFreeActiveData @ 0x140839030 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x140839798 (PiDqQueryGetNextIoctlInfo.c)
 *     PiDqQueryValidateQueryData @ 0x1408398BC (PiDqQueryValidateQueryData.c)
 *     PiDqTraceQueryCreate @ 0x140839A60 (PiDqTraceQueryCreate.c)
 */

__int64 __fastcall PiDqIrpQueryCreate(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rsi
  struct _LIST_ENTRY *v5; // r15
  unsigned int v6; // r12d
  _QWORD *v7; // r15
  int *v8; // rsi
  int v9; // eax
  int v10; // eax
  int ValidateQueryData; // ebx
  unsigned int v12; // r8d
  _DWORD *v13; // rsi
  char v15; // [rsp+30h] [rbp-A8h]
  char v16; // [rsp+31h] [rbp-A7h]
  unsigned int v17; // [rsp+34h] [rbp-A4h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-A0h] BYREF
  struct _LIST_ENTRY *v19; // [rsp+40h] [rbp-98h]
  __int64 v20; // [rsp+48h] [rbp-90h]
  __int64 v21; // [rsp+50h] [rbp-88h]
  __int64 v22; // [rsp+58h] [rbp-80h]
  __int64 v23; // [rsp+60h] [rbp-78h]
  __int64 v24; // [rsp+68h] [rbp-70h]
  __int64 v25; // [rsp+70h] [rbp-68h]
  __int64 v26; // [rsp+78h] [rbp-60h]
  __int128 v27; // [rsp+80h] [rbp-58h] BYREF
  struct _LIST_ENTRY v28; // [rsp+90h] [rbp-48h] BYREF

  v24 = a1;
  v2 = *(_QWORD *)(a1 + 184);
  v22 = v2;
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 48) + 32LL);
  v21 = v3;
  v4 = v3;
  v20 = v3;
  v15 = 0;
  v5 = 0LL;
  v19 = 0LL;
  v23 = 0LL;
  v28 = 0LL;
  v16 = 0;
  v6 = 0;
  v17 = 0;
  v18 = 0;
  v27 = 0LL;
  if ( v3 )
  {
    v7 = (_QWORD *)(a1 + 24);
    v26 = a1 + 24;
    if ( *(_QWORD *)(a1 + 24) )
    {
      PiDqQueryLock(v3);
      v8 = (int *)(v3 + 216);
      v25 = v3 + 216;
      v9 = *(_DWORD *)(v3 + 216);
      if ( (v9 & 8) != 0 )
      {
        ValidateQueryData = -1073741536;
      }
      else if ( (v9 & 0x10) != 0 || (v10 = v9 | 0x10, *v8 = v10, v15 = 1, (v10 & 4) != 0) )
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
          NdrMesTypeDecode3(*(_QWORD *)(v3 + 16), "TP 3\a", &off_1400018C0, &off_140E06FE0, 0, v3 + 24);
          ValidateQueryData = PiDqQueryValidateQueryData(*(_QWORD *)(v3 + 24));
          if ( ValidateQueryData >= 0 )
          {
            if ( !(unsigned __int8)PnpIsNullGuid(*(void **)(v3 + 24)) )
            {
              v28 = *(struct _LIST_ENTRY *)*(_QWORD *)(v3 + 24);
              v19 = IoSetActivityIdThread(&v28);
              v16 = 1;
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
          ValidateQueryData = PiDqQuerySerializeActionQueue(v3, *v7, v12, (unsigned int)&v17, (__int64)&v18);
          v6 = v17;
        }
      }
      v5 = v19;
      v4 = v20;
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
  if ( v15 )
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
      PiDqQueryGetNextIoctlInfo(v3, *(unsigned int *)(v2 + 8), v18, &v27);
      v13 = (_DWORD *)(v4 + 216);
    }
    *v13 &= ~0x10u;
    PiDqQueryUnlock(v3);
  }
  PiDqIrpComplete(a1, (unsigned int)ValidateQueryData, v6, &v27);
  if ( v16 )
    IoClearActivityIdThread(v5);
  return (unsigned int)ValidateQueryData;
}
