/*
 * XREFs of ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x140033D40
 * Callers:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x140033AB0 (EtwTraceAcquiredExclusiveUserCrit.c)
 * Callees:
 *     ?Update@TelemetryBuffer@UserCritTelemetry@@QEAAXQEB_K00@Z @ 0x1401BFDF0 (-Update@TelemetryBuffer@UserCritTelemetry@@QEAAXQEB_K00@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall UserCritTelemetry::SendUserCritSummary(LARGE_INTEGER *this)
{
  LARGE_INTEGER PerformanceCounter; // r15
  LARGE_INTEGER v3; // r8
  LARGE_INTEGER v4; // rax
  LARGE_INTEGER v5; // rcx
  unsigned __int64 v6; // rax
  LARGE_INTEGER v7; // r8
  LARGE_INTEGER v8; // rcx
  LARGE_INTEGER v9; // rax
  unsigned __int64 v10; // rax
  LARGE_INTEGER v11; // r8
  LARGE_INTEGER v12; // rcx
  LARGE_INTEGER v13; // rax
  __int64 v14; // rax
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER v17; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER v18; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER v19; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER v21; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER v22; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER v23; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER v25; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER v26; // [rsp+88h] [rbp-78h] BYREF
  LARGE_INTEGER v27; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR v29; // [rsp+A8h] [rbp-58h] BYREF
  LARGE_INTEGER *v30; // [rsp+B8h] [rbp-48h]
  __int16 v31; // [rsp+C0h] [rbp-40h] BYREF
  LARGE_INTEGER *v32; // [rsp+C8h] [rbp-38h]
  __int16 v33; // [rsp+D0h] [rbp-30h] BYREF
  LARGE_INTEGER *v34; // [rsp+D8h] [rbp-28h]
  __int16 v35; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v37; // [rsp+100h] [rbp+0h]
  int v38; // [rsp+108h] [rbp+8h]
  int v39; // [rsp+10Ch] [rbp+Ch]
  __int64 *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  __int16 *v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  LARGE_INTEGER *v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+138h] [rbp+38h]
  __int16 *v46; // [rsp+140h] [rbp+40h]
  __int64 v47; // [rsp+148h] [rbp+48h]
  LARGE_INTEGER *v48; // [rsp+150h] [rbp+50h]
  __int64 v49; // [rsp+158h] [rbp+58h]
  __int16 *v50; // [rsp+160h] [rbp+60h]
  __int64 v51; // [rsp+168h] [rbp+68h]
  LARGE_INTEGER *v52; // [rsp+170h] [rbp+70h]
  __int64 v53; // [rsp+178h] [rbp+78h]
  int *v54; // [rsp+180h] [rbp+80h]
  __int64 v55; // [rsp+188h] [rbp+88h]
  unsigned __int64 *v56; // [rsp+190h] [rbp+90h]
  __int64 v57; // [rsp+198h] [rbp+98h]
  LARGE_INTEGER *v58; // [rsp+1A0h] [rbp+A0h]
  __int64 v59; // [rsp+1A8h] [rbp+A8h]
  LARGE_INTEGER *v60; // [rsp+1B0h] [rbp+B0h]
  __int64 v61; // [rsp+1B8h] [rbp+B8h]
  LARGE_INTEGER *v62; // [rsp+1C0h] [rbp+C0h]
  __int64 v63; // [rsp+1C8h] [rbp+C8h]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (unsigned __int64)(1000000 * (PerformanceCounter.QuadPart - this[604].QuadPart)) / gliQpcFreq.QuadPart > 0x6B49D200 )
  {
    if ( (unsigned int)dword_14029AF48 > 5
      && (qword_14029AF58 & 0x400000000000LL) != 0
      && (qword_14029AF60 & 0x400000000000LL) == qword_14029AF60 )
    {
      EventDescriptor.Keyword = 0x400000000000LL;
      v31 = 15;
      v30 = this + 580;
      v52 = this + 580;
      v33 = 15;
      v46 = &v33;
      v35 = 15;
      v42 = &v35;
      v54 = &v15;
      v40 = &v16;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_14029AF50;
      v32 = this + 565;
      v34 = this + 550;
      v50 = &v31;
      v48 = this + 565;
      v44 = this + 550;
      v15 = 1;
      v16 = 0x1000000LL;
      v55 = 4LL;
      v51 = 2LL;
      v53 = 120LL;
      v47 = 2LL;
      v49 = 120LL;
      v43 = 2LL;
      v45 = 120LL;
      v41 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_14029AF50;
      v37 = &unk_140276150;
      UserData.Reserved = 2;
      v38 = 79;
      v39 = 1;
      EtwWriteTransfer(qword_14029AF68, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
    }
    memset(&this[550], 0, 0x168uLL);
    this[604] = PerformanceCounter;
  }
  if ( (unsigned __int64)(1000000 * (PerformanceCounter.QuadPart - this[605].QuadPart)) / gliQpcFreq.QuadPart > 0xF4240 )
  {
    UserCritTelemetry::TelemetryBuffer::Update(
      (UserCritTelemetry::TelemetryBuffer *)this,
      (const unsigned __int64 *const)&this[601].QuadPart,
      (const unsigned __int64 *const)&this[595].QuadPart,
      (const unsigned __int64 *const)&this[598].QuadPart);
    if ( (unsigned int)dword_14029AF48 > 5
      && (qword_14029AF58 & 0x10000000) != 0
      && (qword_14029AF60 & 0x10000000) == qword_14029AF60 )
    {
      v3 = this[603];
      v4 = this[597];
      v5 = this[600];
      v17 = v3;
      v18 = v4;
      v19 = v5;
      if ( v3.QuadPart )
        v6 = v4.QuadPart / (unsigned __int64)v3.QuadPart;
      else
        v6 = 0LL;
      v7 = this[602];
      v8 = this[599];
      v20 = v6;
      v9 = this[596];
      v22 = v9;
      v21 = v7;
      v23 = v8;
      if ( v7.QuadPart )
        v10 = v9.QuadPart / (unsigned __int64)v7.QuadPart;
      else
        v10 = 0LL;
      v11 = this[601];
      v12 = this[598];
      v24 = v10;
      v13 = this[595];
      v26 = v13;
      v25 = v11;
      v27 = v12;
      if ( v11.QuadPart )
        v14 = v13.QuadPart / (unsigned __int64)v11.QuadPart;
      else
        v14 = 0LL;
      v16 = v14;
      v63 = 8LL;
      v62 = &v17;
      v61 = 8LL;
      v60 = &v18;
      v59 = 8LL;
      v58 = &v19;
      v56 = &v20;
      v54 = (int *)&v21;
      v52 = &v22;
      v50 = (__int16 *)&v23;
      v48 = (LARGE_INTEGER *)&v24;
      v46 = (__int16 *)&v25;
      v44 = &v26;
      v42 = (__int16 *)&v27;
      v40 = &v16;
      *(_DWORD *)&v29.Level = 5;
      UserData.Ptr = (ULONGLONG)off_14029AF50;
      v57 = 8LL;
      v55 = 8LL;
      v53 = 8LL;
      v51 = 8LL;
      v49 = 8LL;
      v47 = 8LL;
      v45 = 8LL;
      v43 = 8LL;
      v41 = 8LL;
      *(_DWORD *)&v29.Id = 184549376;
      v29.Keyword = 0x10000000LL;
      UserData.Size = *(unsigned __int16 *)off_14029AF50;
      v37 = &unk_140276041;
      UserData.Reserved = 2;
      v38 = 259;
      v39 = 1;
      EtwWriteTransfer(qword_14029AF68, &v29, 0LL, 0LL, 0xEu, &UserData);
    }
    *(_OWORD *)&this[595].LowPart = 0LL;
    this[597].QuadPart = 0LL;
    *(_OWORD *)&this[598].LowPart = 0LL;
    this[600].QuadPart = 0LL;
    *(_OWORD *)&this[601].LowPart = 0LL;
    this[603].QuadPart = 0LL;
    this[605] = PerformanceCounter;
  }
}
