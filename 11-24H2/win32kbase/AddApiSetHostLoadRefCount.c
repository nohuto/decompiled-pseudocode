/*
 * XREFs of AddApiSetHostLoadRefCount @ 0x14010FBC4
 * Callers:
 *     ?LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z @ 0x14010F808 (-LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AddApiSetHostLoadRefCount(__int64 a1, const UNICODE_STRING *a2)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG_PTR BugCheckParameter4; // rdi
  ULONG_PTR CurrentProcess; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned int ProcessSessionId; // eax
  UNICODE_STRING String2; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING v19; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v20; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING v21; // [rsp+60h] [rbp-10h] BYREF

  *(_QWORD *)&String2.Length = 4194366LL;
  *(_QWORD *)&v19.Length = 4718662LL;
  String2.Buffer = L"\\SystemRoot\\System32\\win32k.sys";
  *(_QWORD *)&v20.Length = 4718662LL;
  v19.Buffer = L"\\SystemRoot\\System32\\win32kbase.sys";
  *(_QWORD *)&v21.Length = 4587588LL;
  v20.Buffer = L"\\SystemRoot\\System32\\win32kfull.sys";
  v21.Buffer = L"\\SystemRoot\\System32\\win32kmin.sys";
  v4 = 0;
  if ( RtlCompareUnicodeString(a2, &String2, 0) )
  {
    if ( RtlCompareUnicodeString(a2, &v19, 0) )
    {
      if ( RtlCompareUnicodeString(a2, &v20, 0) )
      {
        if ( RtlCompareUnicodeString(a2, &v21, 0) )
        {
          BugCheckParameter4 = (ULONG_PTR)a2->Buffer;
          CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
          v16 = PsGetCurrentProcess(v13, v12, v14, v15);
          ProcessSessionId = PsGetProcessSessionIdEx(v16);
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
  result = gSessionApiSetHostRefCount;
  *(_DWORD *)(a1 + 48) = v4;
  ++*((_DWORD *)&gSessionApiSetHostRefCount + v4);
  return result;
}
