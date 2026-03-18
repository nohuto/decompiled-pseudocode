/*
 * XREFs of AddApiSetHostLoadRefCount @ 0x140204F30
 * Callers:
 *     ?LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z @ 0x140204DF8 (-LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AddApiSetHostLoadRefCount(__int64 a1, const UNICODE_STRING *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rdi
  ULONG_PTR CurrentProcess; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int ProcessSessionId; // eax
  UNICODE_STRING String2; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING v13; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v14; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING v15; // [rsp+60h] [rbp-10h] BYREF

  *(_QWORD *)&String2.Length = 4194366LL;
  *(_QWORD *)&v13.Length = 4718662LL;
  String2.Buffer = L"\\SystemRoot\\System32\\win32k.sys";
  *(_QWORD *)&v14.Length = 4718662LL;
  v13.Buffer = L"\\SystemRoot\\System32\\win32kbase.sys";
  *(_QWORD *)&v15.Length = 4587588LL;
  v14.Buffer = L"\\SystemRoot\\System32\\win32kfull.sys";
  v15.Buffer = L"\\SystemRoot\\System32\\win32kmin.sys";
  v4 = 0;
  if ( RtlCompareUnicodeString(a2, &String2, 0) )
  {
    if ( RtlCompareUnicodeString(a2, &v13, 0) )
    {
      if ( RtlCompareUnicodeString(a2, &v14, 0) )
      {
        if ( RtlCompareUnicodeString(a2, &v15, 0) )
        {
          BugCheckParameter4 = (ULONG_PTR)a2->Buffer;
          CurrentProcess = PsGetCurrentProcess(v5);
          v10 = PsGetCurrentProcess(v9);
          ProcessSessionId = PsGetProcessSessionIdEx(v10);
          KeBugCheckEx(0x164u, 0x37uLL, ProcessSessionId, CurrentProcess, BugCheckParameter4);
        }
        v4 = 3;
      }
      else
      {
        v4 = 2;
      }
    }
    else
    {
      v4 = 1;
    }
  }
  result = *(_QWORD *)gSessionApiSetHostRefCount;
  *(_DWORD *)(a1 + 48) = v4;
  ++gSessionApiSetHostRefCount[v4];
  return result;
}
