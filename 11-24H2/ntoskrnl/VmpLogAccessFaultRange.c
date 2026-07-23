/*
 * XREFs of VmpLogAccessFaultRange @ 0x14079FBCC
 * Callers:
 *     VmAccessFault @ 0x140A042B0 (VmAccessFault.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall VmpLogAccessFaultRange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9)
{
  _UNKNOWN **v9; // rax
  __int64 v10; // rbx
  unsigned int ProcessId; // eax
  __int64 v15; // r8
  int v17; // [rsp+28h] [rbp-E0h]
  int v18; // [rsp+30h] [rbp-D8h]
  unsigned int v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  int v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-98h] BYREF
  __int64 v27; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+88h] [rbp-80h] BYREF
  unsigned int *v29; // [rsp+A8h] [rbp-60h]
  int v30; // [rsp+B0h] [rbp-58h]
  int v31; // [rsp+B4h] [rbp-54h]
  __int64 *v32; // [rsp+B8h] [rbp-50h]
  int v33; // [rsp+C0h] [rbp-48h]
  int v34; // [rsp+C4h] [rbp-44h]
  __int64 *v35; // [rsp+C8h] [rbp-40h]
  int v36; // [rsp+D0h] [rbp-38h]
  int v37; // [rsp+D4h] [rbp-34h]
  __int64 *v38; // [rsp+D8h] [rbp-30h]
  int v39; // [rsp+E0h] [rbp-28h]
  int v40; // [rsp+E4h] [rbp-24h]
  int *v41; // [rsp+E8h] [rbp-20h]
  int v42; // [rsp+F0h] [rbp-18h]
  int v43; // [rsp+F4h] [rbp-14h]
  int *v44; // [rsp+F8h] [rbp-10h]
  int v45; // [rsp+100h] [rbp-8h]
  int v46; // [rsp+104h] [rbp-4h]
  int *v47; // [rsp+108h] [rbp+0h]
  int v48; // [rsp+110h] [rbp+8h]
  int v49; // [rsp+114h] [rbp+Ch]
  __int64 *v50; // [rsp+118h] [rbp+10h]
  int v51; // [rsp+120h] [rbp+18h]
  int v52; // [rsp+124h] [rbp+1Ch]
  __int64 *v53; // [rsp+128h] [rbp+20h]
  int v54; // [rsp+130h] [rbp+28h]
  int v55; // [rsp+134h] [rbp+2Ch]
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+48h] BYREF

  v9 = &retaddr;
  v10 = *(_QWORD *)&VmpTraceLoggingProvider;
  if ( **(_DWORD **)&VmpTraceLoggingProvider > 5u )
  {
    LOBYTE(v9) = tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 16LL);
    if ( (_BYTE)v9 )
    {
      ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v46 = 0;
      v49 = 0;
      v52 = 0;
      v55 = 0;
      v19 = ProcessId;
      v29 = &v19;
      v32 = &v24;
      v35 = &v25;
      v38 = &v26;
      v20 = a5;
      v41 = &v20;
      v21 = a6;
      v44 = &v21;
      v22 = a7;
      v47 = &v22;
      LODWORD(v23) = a8;
      v50 = &v23;
      v27 = a9;
      v53 = &v27;
      v30 = 4;
      v33 = 8;
      v36 = 8;
      v39 = 8;
      v42 = 4;
      v45 = 4;
      v48 = 4;
      v51 = 4;
      v54 = 8;
      v24 = a2;
      v25 = a3;
      v26 = a4;
      LOBYTE(v9) = tlgWriteEx_EtwWriteEx(v10, (unsigned __int8 *)&word_140052786, v15, 0, v17, v18, 0xBu, &v28);
    }
  }
  return (char)v9;
}
