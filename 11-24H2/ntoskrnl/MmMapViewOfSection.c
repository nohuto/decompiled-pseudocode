/*
 * XREFs of MmMapViewOfSection @ 0x1408DE270
 * Callers:
 *     DifMmMapViewOfSectionWrapper @ 0x140632650 (DifMmMapViewOfSectionWrapper.c)
 *     NtCreateIoRing @ 0x140714CF0 (NtCreateIoRing.c)
 *     NtMapCMFModule @ 0x1407C42B0 (NtMapCMFModule.c)
 *     EtwpCoverageEnsureUserModeView @ 0x1408DCCEC (EtwpCoverageEnsureUserModeView.c)
 *     PspMapSiloSharedDataView @ 0x1408DD840 (PspMapSiloSharedDataView.c)
 *     NtInitializeNlsFiles @ 0x1408DD880 (NtInitializeNlsFiles.c)
 *     MmMapApiSetView @ 0x1408DDA88 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x1408DDBA4 (MmCreatePeb.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x1408EB67C (PspSchedulerSharedDataRegionCreate.c)
 * Callees:
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiMapViewOfSection @ 0x1408A2840 (MiMapViewOfSection.c)
 */

__int64 __fastcall MmMapViewOfSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        unsigned __int64 a5,
        _WORD *a6,
        __int64 *a7,
        int a8,
        int a9,
        int a10)
{
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
  v17 = *a3 == 0;
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
  result = MiMapViewOfSection(a1, (__int64)v22, a3, a5, a6, a8, 1);
  if ( (int)result < 0 )
  {
    if ( *a3 )
      ++dword_140E302EC;
    else
      ++dword_140E302E8;
  }
  else
  {
    *a7 = v25;
    return (unsigned int)result;
  }
  return result;
}
