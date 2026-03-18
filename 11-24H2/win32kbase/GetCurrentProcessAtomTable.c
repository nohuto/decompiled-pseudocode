/*
 * XREFs of GetCurrentProcessAtomTable @ 0x1401B2D78
 * Callers:
 *     UserGlobalAtomTableCallout @ 0x140166C60 (UserGlobalAtomTableCallout.c)
 *     DeleteStringPropertyAtoms @ 0x140168CA0 (DeleteStringPropertyAtoms.c)
 * Callees:
 *     ReferenceWindowStation @ 0x1400CF2E4 (ReferenceWindowStation.c)
 *     ?GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z @ 0x1401A9D60 (-GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z.c)
 */

__int64 __fastcall GetCurrentProcessAtomTable(int *a1, void **a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32WindowStation; // rax
  __int64 v13; // r8
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v14 = 0LL;
  if ( !Win32JobObject::GetJobProcessAtomTable((Win32JobObject *)&v14, a2, a3, a4) )
    goto LABEL_6;
  result = v14;
  if ( v14 )
  {
    v5 = 2;
    goto LABEL_7;
  }
  v15 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
  ProcessWin32WindowStation = PsGetProcessWin32WindowStation(CurrentProcess);
  if ( (int)ReferenceWindowStation((__int64)KeGetCurrentThread(), ProcessWin32WindowStation, v13, (__int64)&v15) >= 0 )
  {
    v5 = 1;
    result = *(_QWORD *)(v15 + 168);
  }
  else
  {
LABEL_6:
    result = v14;
  }
LABEL_7:
  if ( a1 )
    *a1 = v5;
  return result;
}
