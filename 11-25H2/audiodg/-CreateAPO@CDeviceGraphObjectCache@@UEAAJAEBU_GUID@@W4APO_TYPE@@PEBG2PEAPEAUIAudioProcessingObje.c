/*
 * XREFs of ?CreateAPO@CDeviceGraphObjectCache@@UEAAJAEBU_GUID@@W4APO_TYPE@@PEBG2PEAPEAUIAudioProcessingObject@@@Z @ 0x14000D770
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4f5bca04da2ba347195d47ea7d1a4d66_::operator() @ 0x14000D94C (_lambda_4f5bca04da2ba347195d47ea7d1a4d66_--operator().c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

__int64 CDeviceGraphObjectCache::CreateAPO(__int64 a1, unsigned __int16 *a2, int a3, ...)
{
  unsigned int v5; // eax
  __int64 v6; // r10
  unsigned int v7; // edi
  __int64 v8; // rcx
  int v10; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v11; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v12; // [rsp+40h] [rbp-71h]
  __int64 *v13; // [rsp+48h] [rbp-69h] BYREF
  __int64 v14; // [rsp+50h] [rbp-61h] BYREF
  _DWORD v15[2]; // [rsp+58h] [rbp-59h] BYREF
  __int64 v16; // [rsp+60h] [rbp-51h]
  unsigned __int16 *v17; // [rsp+68h] [rbp-49h] BYREF
  va_list v18; // [rsp+70h] [rbp-41h]
  int *v19; // [rsp+78h] [rbp-39h]
  __int64 v20; // [rsp+80h] [rbp-31h]
  unsigned __int16 *v21; // [rsp+88h] [rbp-29h]
  __int64 v22; // [rsp+90h] [rbp-21h]
  __int64 *v23; // [rsp+98h] [rbp-19h]
  __int64 v24; // [rsp+A0h] [rbp-11h]
  char *v25; // [rsp+A8h] [rbp-9h]
  int v26; // [rsp+B0h] [rbp-1h]
  int v27; // [rsp+B4h] [rbp+3h]
  char *v28; // [rsp+B8h] [rbp+7h]
  int v29; // [rsp+C0h] [rbp+Fh]
  int v30; // [rsp+C4h] [rbp+13h]
  int *v31; // [rsp+C8h] [rbp+17h]
  int v32; // [rsp+D0h] [rbp+1Fh]
  int v33; // [rsp+D4h] [rbp+23h]
  int v34; // [rsp+118h] [rbp+67h] BYREF
  __int64 v35; // [rsp+120h] [rbp+6Fh] BYREF
  va_list va; // [rsp+120h] [rbp+6Fh]
  __int64 v37; // [rsp+128h] [rbp+77h] BYREF
  va_list va1; // [rsp+128h] [rbp+77h]
  __int64 *v39; // [rsp+130h] [rbp+7Fh]
  va_list va2; // [rsp+138h] [rbp+87h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v35 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v37 = va_arg(va2, _QWORD);
  v39 = va_arg(va2, __int64 *);
  v34 = a3;
  v13 = v39;
  v17 = a2;
  *v39 = 0LL;
  va_copy(v18, va);
  v19 = &v34;
  va_copy((va_list)v20, va1);
  v21 = (unsigned __int16 *)(a1 - 8);
  v22 = (__int64)&v10 + 1;
  v23 = (__int64 *)&v10;
  v24 = (__int64)&v13;
  LOWORD(v10) = 0;
  v5 = lambda_4f5bca04da2ba347195d47ea7d1a4d66_::operator()(&v17);
  v6 = *(_QWORD *)(a1 + 200);
  v7 = v5;
  if ( *(_DWORD *)v6 > 4u
    && (*(_DWORD *)(v6 + 16) & 0x100LL) != 0
    && (*(_QWORD *)(v6 + 24) & 0x100LL) == *(_QWORD *)(v6 + 24) )
  {
    v33 = 0;
    v30 = 0;
    v27 = 0;
    v11 = v5;
    HIWORD(v10) = v10;
    v16 = 256LL;
    v32 = 4;
    v24 = 8LL;
    v8 = *v13;
    v31 = (int *)&v11;
    v28 = (char *)&v10 + 2;
    v25 = (char *)&v10 + 3;
    v23 = &v14;
    v15[1] = 4;
    v17 = *(unsigned __int16 **)(v6 + 8);
    v14 = v8;
    v29 = 1;
    v26 = 1;
    v21 = a2;
    v22 = 16LL;
    v15[0] = 184549376;
    LODWORD(v18) = *v17;
    v19 = (int *)&unk_1400B0735;
    HIDWORD(v18) = 2;
    v20 = 0x100000067LL;
    LODWORD(v12) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(*(_QWORD *)(v6 + 32), v15, 0LL, 0LL, 7, &v17, v10, v12, v13);
  }
  return v7;
}
