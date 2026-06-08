/*
 * XREFs of EmiProcessIoctl @ 0x14003CDD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x14000BE5C (RtlStringCchPrintfW.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     memset @ 0x14000DAC0 (memset.c)
 */

__int64 __fastcall EmiProcessIoctl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r15
  unsigned int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned int v10; // edi
  int v11; // ebp
  char *v12; // r13
  unsigned int v13; // r12d
  unsigned int v15; // r12d
  unsigned __int64 *v16; // rdi
  unsigned int v17; // edi
  unsigned int v18; // r12d
  char *v19; // rdi
  _DWORD *v20; // r12
  unsigned int v21; // r13d
  wchar_t *v22; // rdi
  unsigned int v23; // r15d
  __int64 v24; // r13
  NTSTATUS v25; // eax
  __int64 v26; // [rsp+20h] [rbp-68h]
  __int64 v27; // [rsp+28h] [rbp-60h]
  int v28; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-44h]
  void *v30; // [rsp+48h] [rbp-40h] BYREF
  __int64 v31; // [rsp+50h] [rbp-38h] BYREF
  __int64 v32; // [rsp+58h] [rbp-30h] BYREF

  v5 = 0;
  v6 = a2;
  v31 = 0LL;
  v7 = 0;
  v32 = 0LL;
  v28 = 0;
  v30 = 0LL;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v8,
         off_1400140A8);
  switch ( a5 )
  {
    case 2244620:
      v10 = 16 * *(unsigned __int16 *)(v9 + 1256);
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, void **, _QWORD))(WdfFunctions_01015 + 2160))(
              WdfDriverGlobals,
              v6,
              v10,
              &v30,
              0LL);
      if ( v11 < 0 )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
                 WdfDriverGlobals,
                 v6,
                 (unsigned int)v11,
                 v7);
      v12 = (char *)v30;
      v7 = v10;
      ((void (__fastcall *)(__int64, __int64))qword_140014858)(v9, 0x800000000000LL);
      v13 = 0;
      if ( !*(_WORD *)(v9 + 1256) )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
                 WdfDriverGlobals,
                 v6,
                 (unsigned int)v11,
                 v7);
      do
      {
        v15 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))qword_140014860)(v9, v13, 0x800000000000LL);
        v16 = (unsigned __int64 *)&v12[16 * v5];
        v11 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64 *, unsigned __int64 *))qword_140014868)(
                v9,
                v15,
                v16,
                v16 + 1);
        ++v5;
        v13 = v15 + 1;
        *v16 = 2500 * *v16 / 9;
      }
      while ( v5 < *(unsigned __int16 *)(v9 + 1256) );
LABEL_6:
      v6 = a2;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
               WdfDriverGlobals,
               v6,
               (unsigned int)v11,
               v7);
    case 2244608:
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
              WdfDriverGlobals,
              v6,
              2LL,
              &v30,
              0LL);
      if ( v11 >= 0 )
      {
        v7 = 2;
        *(_WORD *)v30 = 2;
      }
      break;
    case 2244612:
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
              WdfDriverGlobals,
              v6,
              4LL,
              &v30,
              0LL);
      if ( v11 >= 0 )
      {
        v7 = 4;
        *(_DWORD *)v30 = 106 * *(unsigned __int16 *)(v9 + 1256) + 68;
      }
      break;
    case 2244616:
      v17 = 106 * *(unsigned __int16 *)(v9 + 1256) + 68;
      v18 = v17;
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, void **, _QWORD))(WdfFunctions_01015 + 2160))(
              WdfDriverGlobals,
              v6,
              v17,
              &v30,
              0LL);
      if ( v11 >= 0 )
      {
        v7 = v17;
        v29 = v17;
        v19 = (char *)v30;
        memset(v30, 0, v18);
        v20 = v19 + 68;
        v21 = 0;
        *(_OWORD *)v19 = *(_OWORD *)L"Microsoft";
        *((_DWORD *)v19 + 4) = *(_DWORD *)L"t";
        *((_QWORD *)v19 + 4) = 0x4D00500050LL;
        *((_WORD *)v19 + 32) = 1;
        *((_WORD *)v19 + 33) = *(_WORD *)(v9 + 1256);
        if ( *(_WORD *)(v9 + 1256) )
        {
          v22 = (wchar_t *)(v19 + 74);
          v23 = 0;
          do
          {
            v24 = (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64))qword_140014860)(
                                  v9,
                                  v21,
                                  0x800000000000LL);
            ((void (__fastcall *)(__int64, __int64 *, __int64 *, int *))qword_140014870)(v24, &v32, &v31, &v28);
            if ( v28 == 1 )
            {
              LODWORD(v27) = *(_DWORD *)(*(_QWORD *)(v9 + 1240) + 24LL);
              LODWORD(v26) = *(_DWORD *)(*(_QWORD *)(v9 + 1080) + 32LL);
              v25 = RtlStringCchPrintfW(v22, 0x64uLL, L"%s_Package%d_Core%d_%s", v32, v26, v27, v31);
            }
            else
            {
              LODWORD(v26) = *(_DWORD *)(*(_QWORD *)(v9 + 1080) + 32LL);
              v25 = RtlStringCchPrintfW(v22, 0x64uLL, L"%s_Package%d_%s", v32, v26, v31);
            }
            *v20 = 0;
            v11 = v25;
            *(v22 - 1) = 100;
            v20 = (_DWORD *)((char *)v20 + 106);
            v22 += 53;
            ++v23;
            v21 = v24 + 1;
          }
          while ( v23 < *(unsigned __int16 *)(v9 + 1256) );
          v7 = v29;
          goto LABEL_6;
        }
      }
      break;
    default:
      v11 = -1073741637;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
               WdfDriverGlobals,
               v6,
               (unsigned int)v11,
               v7);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           v6,
           (unsigned int)v11,
           v7);
}
