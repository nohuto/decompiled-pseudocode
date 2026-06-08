/*
 * XREFs of EmiProcessIoctl @ 0x140043F70
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x140006438 (RtlStringCchPrintfW.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     memset @ 0x140010340 (memset.c)
 */

__int64 __fastcall EmiProcessIoctl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // edi
  unsigned int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  int v11; // ebx
  unsigned int v12; // ebx
  int v13; // esi
  unsigned int v14; // r13d
  char *v15; // r15
  unsigned int v16; // r13d
  unsigned __int64 *v17; // rbx
  unsigned int v19; // ebx
  unsigned int v20; // r12d
  char *v21; // rbx
  _DWORD *v22; // r13
  unsigned int v23; // ecx
  wchar_t *v24; // rbx
  unsigned int v25; // r15d
  NTSTATUS v26; // eax
  int v27; // ecx
  __int64 v28; // [rsp+20h] [rbp-50h]
  __int64 v29; // [rsp+28h] [rbp-48h]
  int v30; // [rsp+40h] [rbp-30h] BYREF
  char *v31; // [rsp+48h] [rbp-28h]
  void *v32; // [rsp+50h] [rbp-20h] BYREF
  __int64 v33; // [rsp+58h] [rbp-18h] BYREF
  __int64 v34; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v36; // [rsp+C0h] [rbp+50h]

  v5 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v7 = 0;
  v30 = 0;
  v32 = 0LL;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v8,
         off_140018040);
  v10 = v9;
  if ( a5 == 2244608 )
  {
    v11 = 2;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
            WdfDriverGlobals,
            a2,
            2LL,
            &v32,
            0LL);
    if ( v13 < 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
               WdfDriverGlobals,
               a2,
               (unsigned int)v13,
               v7);
    *(_WORD *)v32 = 2;
LABEL_13:
    v7 = v11;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
             WdfDriverGlobals,
             a2,
             (unsigned int)v13,
             v7);
  }
  v11 = 4;
  switch ( a5 )
  {
    case 2244612:
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
              WdfDriverGlobals,
              a2,
              4LL,
              &v32,
              0LL);
      if ( v13 < 0 )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
                 WdfDriverGlobals,
                 a2,
                 (unsigned int)v13,
                 v7);
      *(_DWORD *)v32 = 106 * *(unsigned __int16 *)(v10 + 1256) + 68;
      goto LABEL_13;
    case 2244616:
      v19 = 106 * *(unsigned __int16 *)(v9 + 1256) + 68;
      v20 = v19;
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, void **, _QWORD))(WdfFunctions_01015 + 2160))(
              WdfDriverGlobals,
              a2,
              v19,
              &v32,
              0LL);
      if ( v13 >= 0 )
      {
        v7 = v19;
        v36 = v19;
        v21 = (char *)v32;
        memset(v32, 0, v20);
        v22 = v21 + 68;
        v23 = 0;
        *(_OWORD *)v21 = *(_OWORD *)L"Microsoft";
        *((_DWORD *)v21 + 4) = *(_DWORD *)L"t";
        *((_QWORD *)v21 + 4) = 0x4D00500050LL;
        *((_WORD *)v21 + 32) = 1;
        *((_WORD *)v21 + 33) = *(_WORD *)(v10 + 1256);
        if ( *(_WORD *)(v10 + 1256) )
        {
          v24 = (wchar_t *)(v21 + 74);
          v25 = 0;
          do
          {
            LODWORD(v31) = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))qword_140019440)(
                             v10,
                             v23,
                             0x800000000000LL);
            ((void (__fastcall *)(_QWORD, __int64 *, __int64 *, int *))qword_140019450)(
              (unsigned int)v31,
              &v34,
              &v33,
              &v30);
            if ( v30 == 1 )
            {
              LODWORD(v29) = *(_DWORD *)(*(_QWORD *)(v10 + 1240) + 24LL);
              LODWORD(v28) = *(_DWORD *)(*(_QWORD *)(v10 + 1080) + 32LL);
              v26 = RtlStringCchPrintfW(v24, 0x64uLL, L"%s_Package%d_Core%d_%s", v34, v28, v29, v33);
            }
            else
            {
              LODWORD(v28) = *(_DWORD *)(*(_QWORD *)(v10 + 1080) + 32LL);
              v26 = RtlStringCchPrintfW(v24, 0x64uLL, L"%s_Package%d_%s", v34, v28, v33);
            }
            v27 = (int)v31;
            v13 = v26;
            *v22 = 0;
            v23 = v27 + 1;
            *(v24 - 1) = 100;
            v22 = (_DWORD *)((char *)v22 + 106);
            v24 += 53;
            ++v25;
          }
          while ( v25 < *(unsigned __int16 *)(v10 + 1256) );
          goto LABEL_9;
        }
      }
      break;
    case 2244620:
      v12 = 16 * *(unsigned __int16 *)(v9 + 1256);
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, void **, _QWORD))(WdfFunctions_01015 + 2160))(
              WdfDriverGlobals,
              a2,
              v12,
              &v32,
              0LL);
      if ( v13 >= 0 )
      {
        v31 = (char *)v32;
        v7 = v12;
        v36 = v12;
        ((void (__fastcall *)(__int64, __int64))qword_140019438)(v10, 0x800000000000LL);
        v14 = 0;
        if ( *(_WORD *)(v10 + 1256) )
        {
          v15 = v31;
          do
          {
            v16 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))qword_140019440)(v10, v14, 0x800000000000LL);
            v17 = (unsigned __int64 *)&v15[16 * v5];
            v13 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64 *, unsigned __int64 *))qword_140019448)(
                    v10,
                    v16,
                    v17,
                    v17 + 1);
            ++v5;
            v14 = v16 + 1;
            *v17 = 2500 * *v17 / 9;
          }
          while ( v5 < *(unsigned __int16 *)(v10 + 1256) );
LABEL_9:
          v7 = v36;
        }
      }
      break;
    default:
      v13 = -1073741637;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
               WdfDriverGlobals,
               a2,
               (unsigned int)v13,
               v7);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v13,
           v7);
}
