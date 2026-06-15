/*
 * XREFs of ?NonRTCancelSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ @ 0x14007F790
 * Callers:
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14007F320 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4CProcessingData@@QEAAXAEAV0@@Z @ 0x140035E1C (--4CProcessingData@@QEAAXAEAV0@@Z.c)
 *     ??1CProcessingData@@QEAA@XZ @ 0x140042F40 (--1CProcessingData@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CRealTimeSafeStruct<CProcessingData,1>::NonRTCancelSafePointer(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // esi
  ATL::CAtlException *v4; // rbx
  ATL::CAtlException *v5; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v6; // [rsp+30h] [rbp-98h] BYREF
  __int64 v7; // [rsp+40h] [rbp-88h]
  __int64 v8; // [rsp+48h] [rbp-80h]
  __int64 v9; // [rsp+50h] [rbp-78h]
  int v10; // [rsp+58h] [rbp-70h]
  __int128 v11; // [rsp+60h] [rbp-68h]
  __int64 v12; // [rsp+70h] [rbp-58h]
  __int64 v13; // [rsp+78h] [rbp-50h]
  __int64 v14; // [rsp+80h] [rbp-48h]
  int v15; // [rsp+88h] [rbp-40h]
  __int128 v16; // [rsp+90h] [rbp-38h]
  __int64 v17; // [rsp+A0h] [rbp-28h]
  __int64 v18; // [rsp+A8h] [rbp-20h]
  __int64 v19; // [rsp+B0h] [rbp-18h]
  int v20; // [rsp+B8h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  try
  {
    v1 = a1;
    *(_BYTE *)(a1 + 376) = 1;
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    v10 = 10;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 10;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 10;
    v3 = 0;
    CProcessingData::operator=(a1 + 144 * (*(unsigned __int16 *)(a1 + 328) ^ 1LL), (__int64)&v6);
  }
  catch ( ATL::CAtlException *v5 )
  {
    v4 = v5;
    if ( *(_DWORD *)v5 == -1073741571 )
      _o__resetstkoflw();
    v1 = a1;
    v3 = *(_DWORD *)v4;
  }
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x18F,
      (int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h",
      (const char *)(unsigned int)v3);
  CProcessingData::~CProcessingData((CProcessingData *)&v6);
  LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 336));
}
