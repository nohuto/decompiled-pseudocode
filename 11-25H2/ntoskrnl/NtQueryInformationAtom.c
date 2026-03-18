/*
 * XREFs of NtQueryInformationAtom @ 0x14091E440
 * Callers:
 *     <none>
 * Callees:
 *     PsSessionGetWin32Callouts @ 0x14047422C (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404EBC50 (PspUpdateCalloutParameters.c)
 *     RtlQueryAtomsInAtomTable @ 0x1407717C8 (RtlQueryAtomsInAtomTable.c)
 *     ExCallCallBack @ 0x14091E61C (ExCallCallBack.c)
 *     RtlQueryAtomInAtomTable @ 0x14091E760 (RtlQueryAtomInAtomTable.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

__int64 __fastcall NtQueryInformationAtom(unsigned __int16 a1, int a2, _WORD *a3, unsigned int a4, int *a5)
{
  SIZE_T v5; // rsi
  union _RTL_RUN_ONCE *Win32Callouts; // rax
  unsigned int v10; // r10d
  __int64 v11; // r15
  __int64 v12; // rcx
  int v13; // ebx
  int AtomsInAtomTable; // edx
  int v15; // eax
  int v17; // [rsp+34h] [rbp-64h] BYREF
  int v18; // [rsp+38h] [rbp-60h] BYREF
  int v19; // [rsp+3Ch] [rbp-5Ch]
  int v20; // [rsp+40h] [rbp-58h] BYREF
  __int128 v21; // [rsp+48h] [rbp-50h] BYREF
  int v22[2]; // [rsp+58h] [rbp-40h]
  __int64 v23; // [rsp+60h] [rbp-38h]
  int v24; // [rsp+68h] [rbp-30h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-28h]

  v5 = a4;
  v20 = 0;
  v18 = 0;
  v17 = 0;
  v21 = 0LL;
  *(_QWORD *)v22 = 0LL;
  v24 = 0;
  v23 = 0LL;
  if ( (unsigned int)PspUpdateCalloutParameters(2, (__int64)&v21, 0, 0LL) )
  {
    Win32Callouts = PsSessionGetWin32Callouts();
    ExCallCallBack(Win32Callouts, v10, &v21);
  }
  v11 = *(_QWORD *)v22;
  if ( !*(_QWORD *)v22 )
    return 3221225506LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    ProbeForWrite(a3, v5, 4u);
    if ( a5 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a5;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  v13 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v13 = 4;
      if ( (unsigned int)v5 < 4 )
        return 3221225476LL;
      AtomsInAtomTable = RtlQueryAtomsInAtomTable(v11, (unsigned int)(v5 - 4) >> 1, a3, (__int64)(a3 + 2));
      v19 = AtomsInAtomTable;
      if ( AtomsInAtomTable >= 0 )
        v13 = 2 * *(_DWORD *)a3 + 4;
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
      return 3221225476LL;
    v17 = 0;
    v18 = v5 - 6;
    AtomsInAtomTable = RtlQueryAtomInAtomTable(v11, a1, (int)&v17, (int)&v20, a3 + 3, (__int64)&v18);
    v19 = AtomsInAtomTable;
    if ( AtomsInAtomTable >= 0 )
    {
      *a3 = v17;
      a3[1] = v20;
      v15 = v18;
      a3[2] = v18;
      v13 = v15 + 8;
    }
  }
  if ( a5 )
    *a5 = v13;
  return (unsigned int)AtomsInAtomTable;
}
