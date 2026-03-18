/*
 * XREFs of MmMapViewOfSection @ 0x1408FBFC0
 * Callers:
 *     DifMmMapViewOfSectionWrapper @ 0x1406280D0 (DifMmMapViewOfSectionWrapper.c)
 *     NtCreateIoRing @ 0x14070B060 (NtCreateIoRing.c)
 *     NtMapCMFModule @ 0x1407B4B70 (NtMapCMFModule.c)
 *     PspMapSiloSharedDataView @ 0x14083B6C0 (PspMapSiloSharedDataView.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x1408BA4BC (PspSchedulerSharedDataRegionCreate.c)
 *     NtInitializeNlsFiles @ 0x1408FA030 (NtInitializeNlsFiles.c)
 *     MmMapApiSetView @ 0x1408FA238 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x1408FA99C (MmCreatePeb.c)
 *     EtwpCoverageEnsureUserModeView @ 0x140A57A78 (EtwpCoverageEnsureUserModeView.c)
 * Callees:
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiMapViewOfSection @ 0x1408FC9F0 (MiMapViewOfSection.c)
 */

__int64 __fastcall MmMapViewOfSection(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        int a8,
        int a9,
        int a10)
{
  int v13; // r13d
  __int64 v14; // r15
  unsigned __int64 v15; // rsi
  char v16; // cl
  bool v17; // zf
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 result; // rax
  unsigned __int64 v21; // rax
  _BYTE v22[8]; // [rsp+48h] [rbp-79h] BYREF
  unsigned __int64 v23; // [rsp+50h] [rbp-71h]
  __int64 v24; // [rsp+58h] [rbp-69h]
  __int64 v25; // [rsp+60h] [rbp-61h]
  unsigned int v26; // [rsp+70h] [rbp-51h]
  int v27; // [rsp+74h] [rbp-4Dh]
  unsigned int v28; // [rsp+7Ch] [rbp-45h]
  char PreviousMode; // [rsp+81h] [rbp-40h]
  int v30; // [rsp+84h] [rbp-3Dh]
  int v31; // [rsp+88h] [rbp-39h]
  __int64 v32; // [rsp+A0h] [rbp-21h]
  _KPROCESS *Process; // [rsp+A8h] [rbp-19h]

  v13 = a1;
  v14 = *a7;
  v15 = MiSectionControlArea(a1);
  memset_0(v22, 0, 0x80uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v32 = a2;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v28 = a9 & 0x7F;
  if ( v28 > (unsigned __int16)KeNumberNodes )
    return 3221225485LL;
  v31 = 0;
  v16 = v30;
  v17 = *a3 == 0LL;
  v26 = a9 & 0xFFFFFF80;
  v27 = a10;
  if ( !v17 )
  {
    v16 = v30 | 1;
    v30 |= 1u;
  }
  v25 = v14;
  if ( (*(_DWORD *)(v15 + 56) & 0x20) == 0 && (v16 & 1) != 0 )
  {
    v19 = *(_QWORD *)(a2 + 872) - 1LL;
    if ( v19 >= 0x7FFFFFFEFFFFLL )
      v19 = 0x7FFFFFFEFFFFLL;
  }
  else
  {
    v18 = 0x7FFFFFFEFFFFLL;
    if ( a4 )
    {
      v21 = 0xFFFFFFFFFFFFFFFFuLL >> a4;
      if ( 0xFFFFFFFFFFFFFFFFuLL >> a4 > 0x7FFFFFFEFFFFLL )
        v21 = 0x7FFFFFFEFFFFLL;
      v18 = v21;
    }
    v19 = *(_QWORD *)(a2 + 872) - 1LL;
    if ( v18 <= v19 )
      v19 = v18;
  }
  v23 = v19;
  v24 = 0x10000LL;
  if ( (*(_DWORD *)(v15 + 56) & 0x420) == 0 )
  {
    if ( (a9 & 0x20000000) != 0 )
    {
      v24 = 0x200000LL;
    }
    else if ( (a9 & 0x40000000) != 0 )
    {
      v24 = 4096LL;
    }
  }
  result = MiMapViewOfSection(v13, (unsigned int)v22, (_DWORD)a3, a5, a6, a8, 1);
  if ( (int)result < 0 )
  {
    if ( *a3 )
      ++dword_140E2FF64;
    else
      ++dword_140E2FF60;
  }
  else
  {
    *a7 = v25;
    return (unsigned int)result;
  }
  return result;
}
