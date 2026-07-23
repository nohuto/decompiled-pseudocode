/*
 * XREFs of NtQueryInformationAtom @ 0x1408F45F0
 * Callers:
 *     <none>
 * Callees:
 *     PsSessionGetWin32Callouts @ 0x140463D20 (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404E64C0 (PspUpdateCalloutParameters.c)
 *     RtlQueryAtomsInAtomTable @ 0x140780948 (RtlQueryAtomsInAtomTable.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExCallCallBack @ 0x1408F47CC (ExCallCallBack.c)
 *     RtlQueryAtomInAtomTable @ 0x1408F4910 (RtlQueryAtomInAtomTable.c)
 */

NTSTATUS __cdecl NtQueryInformationAtom(
        RTL_ATOM Atom,
        ATOM_INFORMATION_CLASS AtomInformationClass,
        PVOID AtomInformation,
        ULONG AtomInformationLength,
        PULONG ReturnLength)
{
  SIZE_T v5; // rsi
  _RTL_RUN_ONCE *Win32Callouts; // rax
  unsigned int v10; // r10d
  PVOID v11; // r15
  __int64 v12; // rcx
  ULONG v13; // ebx
  NTSTATUS AtomsInAtomTable; // edx
  ULONG v15; // eax
  ULONG AtomUsage; // [rsp+34h] [rbp-64h] BYREF
  ULONG AtomNameLength; // [rsp+38h] [rbp-60h] BYREF
  int v19; // [rsp+3Ch] [rbp-5Ch]
  ULONG AtomFlags; // [rsp+40h] [rbp-58h] BYREF
  __int128 v21; // [rsp+48h] [rbp-50h] BYREF
  PVOID AtomTableHandle; // [rsp+58h] [rbp-40h]
  __int64 v23; // [rsp+60h] [rbp-38h]
  int v24; // [rsp+68h] [rbp-30h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-28h]

  v5 = AtomInformationLength;
  AtomFlags = 0;
  AtomNameLength = 0;
  AtomUsage = 0;
  v21 = 0LL;
  AtomTableHandle = 0LL;
  v24 = 0;
  v23 = 0LL;
  if ( (unsigned int)PspUpdateCalloutParameters(2, (__int64)&v21, 0, 0LL) )
  {
    Win32Callouts = PsSessionGetWin32Callouts();
    ExCallCallBack(Win32Callouts, v10, &v21);
  }
  v11 = AtomTableHandle;
  if ( !AtomTableHandle )
    return -1073741790;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    ProbeForWrite(AtomInformation, v5, 4u);
    if ( ReturnLength )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v12 = (__int64)ReturnLength;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  v13 = 0;
  if ( AtomInformationClass )
  {
    if ( AtomInformationClass == AtomTableInformation )
    {
      v13 = 4;
      if ( (unsigned int)v5 < 4 )
        return -1073741820;
      AtomsInAtomTable = RtlQueryAtomsInAtomTable(
                           (__int64)v11,
                           (unsigned int)(v5 - 4) >> 1,
                           AtomInformation,
                           (__int64)AtomInformation + 4);
      v19 = AtomsInAtomTable;
      if ( AtomsInAtomTable >= 0 )
        v13 = 2 * *(_DWORD *)AtomInformation + 4;
    }
    else
    {
      AtomsInAtomTable = -1073741821;
      v19 = -1073741821;
    }
  }
  else
  {
    v13 = 6;
    if ( (unsigned int)v5 < 6 )
      return -1073741820;
    AtomUsage = 0;
    AtomNameLength = v5 - 6;
    AtomsInAtomTable = RtlQueryAtomInAtomTable(
                         v11,
                         Atom,
                         &AtomUsage,
                         &AtomFlags,
                         (PWSTR)AtomInformation + 3,
                         &AtomNameLength);
    v19 = AtomsInAtomTable;
    if ( AtomsInAtomTable >= 0 )
    {
      *(_WORD *)AtomInformation = AtomUsage;
      *((_WORD *)AtomInformation + 1) = AtomFlags;
      v15 = AtomNameLength;
      *((_WORD *)AtomInformation + 2) = AtomNameLength;
      v13 = v15 + 8;
    }
  }
  if ( ReturnLength )
    *ReturnLength = v13;
  return AtomsInAtomTable;
}
