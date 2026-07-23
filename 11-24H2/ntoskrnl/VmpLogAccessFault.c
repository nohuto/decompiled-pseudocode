/*
 * XREFs of VmpLogAccessFault @ 0x14079FA04
 * Callers:
 *     VmAccessFault @ 0x140A042B0 (VmAccessFault.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall VmpLogAccessFault(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10)
{
  _UNKNOWN **v10; // rax
  __int64 v11; // rbx
  unsigned int ProcessId; // eax
  __int64 v16; // r8
  int v18; // [rsp+28h] [rbp-E0h]
  int v19; // [rsp+30h] [rbp-D8h]
  unsigned int v20; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  int v22; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+54h] [rbp-B4h] BYREF
  int v24; // [rsp+58h] [rbp-B0h] BYREF
  int v25; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+88h] [rbp-80h] BYREF
  unsigned int *v31; // [rsp+A8h] [rbp-60h]
  int v32; // [rsp+B0h] [rbp-58h]
  int v33; // [rsp+B4h] [rbp-54h]
  int *v34; // [rsp+B8h] [rbp-50h]
  int v35; // [rsp+C0h] [rbp-48h]
  int v36; // [rsp+C4h] [rbp-44h]
  int *v37; // [rsp+C8h] [rbp-40h]
  int v38; // [rsp+D0h] [rbp-38h]
  int v39; // [rsp+D4h] [rbp-34h]
  int *v40; // [rsp+D8h] [rbp-30h]
  int v41; // [rsp+E0h] [rbp-28h]
  int v42; // [rsp+E4h] [rbp-24h]
  int *v43; // [rsp+E8h] [rbp-20h]
  int v44; // [rsp+F0h] [rbp-18h]
  int v45; // [rsp+F4h] [rbp-14h]
  __int64 *v46; // [rsp+F8h] [rbp-10h]
  int v47; // [rsp+100h] [rbp-8h]
  int v48; // [rsp+104h] [rbp-4h]
  __int64 *v49; // [rsp+108h] [rbp+0h]
  int v50; // [rsp+110h] [rbp+8h]
  int v51; // [rsp+114h] [rbp+Ch]
  __int64 *v52; // [rsp+118h] [rbp+10h]
  int v53; // [rsp+120h] [rbp+18h]
  int v54; // [rsp+124h] [rbp+1Ch]
  int *v55; // [rsp+128h] [rbp+20h]
  int v56; // [rsp+130h] [rbp+28h]
  int v57; // [rsp+134h] [rbp+2Ch]
  __int64 *v58; // [rsp+138h] [rbp+30h]
  int v59; // [rsp+140h] [rbp+38h]
  int v60; // [rsp+144h] [rbp+3Ch]
  _UNKNOWN *retaddr; // [rsp+170h] [rbp+68h] BYREF

  v10 = &retaddr;
  v11 = *(_QWORD *)&VmpTraceLoggingProvider;
  if ( **(_DWORD **)&VmpTraceLoggingProvider > 5u )
  {
    LOBYTE(v10) = tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 8LL);
    if ( (_BYTE)v10 )
    {
      ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v45 = 0;
      v48 = 0;
      v51 = 0;
      v54 = 0;
      v57 = 0;
      v60 = 0;
      v20 = ProcessId;
      v31 = &v20;
      v21 = a10;
      v34 = &v21;
      v37 = &v22;
      v40 = &v23;
      v43 = &v24;
      v26 = a5;
      v46 = &v26;
      v27 = a6;
      v49 = &v27;
      v28 = a8;
      v52 = &v28;
      v25 = a7;
      v55 = &v25;
      v29 = a9;
      v58 = &v29;
      v32 = 4;
      v35 = 4;
      v38 = 4;
      v41 = 4;
      v44 = 4;
      v56 = 4;
      v22 = a2;
      v23 = a3;
      v24 = a4;
      v47 = 8;
      v50 = 8;
      v53 = 8;
      v59 = 8;
      LOBYTE(v10) = tlgWriteEx_EtwWriteEx(v11, (unsigned __int8 *)&byte_14005292F, v16, 0, v18, v19, 0xCu, &v30);
    }
  }
  return (char)v10;
}
