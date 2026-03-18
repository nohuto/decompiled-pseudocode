/*
 * XREFs of ?pvFontFile@UMPDOBJ@@QEAAXPEAX0K@Z @ 0x1400DB59C
 * Callers:
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1400DAB20 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDOBJ::pvFontFile(UMPDOBJ *this, void *a2, void *a3, int a4)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rbx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(this);
  v9 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  *((_QWORD *)this + 49) = v9;
  ObfReferenceObject(*(PVOID *)v9);
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  *((_QWORD *)this + 46) = a3;
  *((_DWORD *)this + 97) = a4;
  *((_QWORD *)this + 47) = a2;
}
