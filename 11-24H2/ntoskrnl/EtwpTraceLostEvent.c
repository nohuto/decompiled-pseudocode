/*
 * XREFs of EtwpTraceLostEvent @ 0x1403FAEA8
 * Callers:
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     EtwpFailLogging @ 0x1403FABA0 (EtwpFailLogging.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwpGetEventNameFromEventMetadata @ 0x1403FB210 (EtwpGetEventNameFromEventMetadata.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTraceLostEvent(
        _QWORD *a1,
        __int16 *a2,
        unsigned __int16 *a3,
        int a4,
        char a5,
        unsigned int a6,
        void **a7,
        char a8,
        char a9)
{
  void **v12; // r9
  __int64 EventNameFromEventMetadata; // r14
  _BYTE *Pool2; // rdi
  void **v15; // rsi
  __int64 v16; // rcx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned __int64 v19; // rax
  void *v20; // rsp
  char *v21; // r8
  ULONG UserDataCount; // r10d
  _BYTE *v23; // rdx
  char *v24; // r8
  const EVENT_DESCRIPTOR *v25; // rdx
  _BYTE v26[4]; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int16 v27; // [rsp+44h] [rbp+4h] BYREF
  __int16 v28; // [rsp+48h] [rbp+8h] BYREF
  _BYTE *v29; // [rsp+50h] [rbp+10h]
  int v30; // [rsp+58h] [rbp+18h]
  int v31; // [rsp+60h] [rbp+20h]
  void **v32; // [rsp+68h] [rbp+28h]
  _QWORD *v33; // [rsp+78h] [rbp+38h]
  void *Src[2]; // [rsp+80h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp+50h] BYREF
  char *v36; // [rsp+A0h] [rbp+60h]
  __int64 v37; // [rsp+A8h] [rbp+68h]
  __int16 *v38; // [rsp+B0h] [rbp+70h]
  __int64 v39; // [rsp+B8h] [rbp+78h]
  _QWORD v40[2]; // [rsp+C0h] [rbp+80h] BYREF
  _BYTE v41[16]; // [rsp+D0h] [rbp+90h] BYREF
  char v42; // [rsp+E0h] [rbp+A0h] BYREF

  v33 = a1;
  v31 = a4;
  v12 = a7;
  v28 = 0;
  EventNameFromEventMetadata = 0LL;
  v27 = 0;
  Pool2 = 0LL;
  v29 = 0LL;
  *(_OWORD *)Src = 0LL;
  v15 = 0LL;
  v26[0] = 0;
  v16 = *a1 - *(_QWORD *)&EventTracingProvGuid.Data1;
  if ( !v16 )
    v16 = a1[1] - *(_QWORD *)EventTracingProvGuid.Data4;
  if ( v16 )
  {
    v17 = 0;
    v30 = 0;
    while ( v17 < a6 )
    {
      if ( BYTE4(a7[2 * v17 + 1]) == 1 )
      {
        v15 = &a7[2 * v17];
        if ( a8 )
        {
          *(_OWORD *)Src = *(_OWORD *)v15;
          v15 = Src;
          v32 = Src;
          v12 = Src;
          v18 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 8));
          if ( v18 >= 0xFFFF )
            break;
          if ( a9 )
          {
            if ( v18 )
            {
              v21 = (char *)Src[0] + v18;
              if ( (unsigned __int64)v21 > 0x7FFFFFFF0000LL || v21 < Src[0] )
              {
                v18 = (unsigned int)Src[1];
                v15 = v32;
              }
            }
          }
          if ( v18 <= 0x100 )
          {
            v19 = LODWORD(Src[1]) + 15LL;
            if ( v19 < LODWORD(Src[1]) )
              v19 = 0xFFFFFFFFFFFFFF0LL;
            v20 = alloca(v19 & 0xFFFFFFFFFFFFFFF0uLL);
            Pool2 = v26;
            v29 = v26;
          }
          else
          {
            Pool2 = (_BYTE *)ExAllocatePool2(0x42uLL, LODWORD(Src[1]), 0x74777445u);
            v29 = Pool2;
            if ( !Pool2 )
              break;
            v26[0] = 1;
            v18 = (unsigned int)Src[1];
          }
          memmove(Pool2, Src[0], v18);
        }
        else
        {
          v32 = &a7[2 * v17];
          Pool2 = *v15;
          v29 = *v15;
        }
        break;
      }
      v30 = ++v17;
    }
    if ( v15 && Pool2 )
      EventNameFromEventMetadata = EtwpGetEventNameFromEventMetadata(Pool2, *((unsigned int *)v15 + 2), &v27, v12);
    UserData.Ptr = (ULONGLONG)a1;
    *(_QWORD *)&UserData.Size = 16LL;
    v36 = &a5;
    v37 = 4LL;
    if ( EventNameFromEventMetadata && v27 )
    {
      v38 = (__int16 *)EventNameFromEventMetadata;
      v39 = v27;
      v40[0] = &EtwpNull;
      v40[1] = 1LL;
      UserDataCount = 6;
      v23 = v41;
      v24 = &v42;
    }
    else
    {
      v28 = *a2;
      v38 = &v28;
      v39 = 2LL;
      UserDataCount = 5;
      v23 = v40;
      v24 = v41;
    }
    *(_QWORD *)v23 = *((_QWORD *)a3 + 1);
    *((_DWORD *)v23 + 2) = *a3;
    *((_DWORD *)v23 + 3) = 0;
    *(_QWORD *)v24 = &EtwpNull;
    *((_QWORD *)v24 + 1) = 2LL;
    v25 = &ETW_EVENT_LOST_EVENT;
    if ( v27 )
      v25 = &ETW_EVENT_LOST_TLG_EVENT;
    EtwWriteEx(EtwpEventTracingProvRegHandle, v25, 0LL, v31 | 1, 0LL, 0LL, UserDataCount, &UserData);
    if ( v26[0] )
      ExFreePoolWithTag(Pool2, 0);
  }
}
