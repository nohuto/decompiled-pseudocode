/*
 * XREFs of ?CreateValidationProcessInCallerSession@DXGVALIDATION@@AEAAJPEAPEAU_EPROCESS@@@Z @ 0x140079F50
 * Callers:
 *     ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1400593D4 (-InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DXGVALIDATION::CreateValidationProcessInCallerSession(
        DXGVALIDATION *this,
        PVOID *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  void *v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  NTSTATUS v9; // eax
  PVOID Ptr; // rcx
  _EX_RUNDOWN_REF RunRef; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h]
  UNICODE_STRING SourceString; // [rsp+80h] [rbp-88h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v16; // [rsp+90h] [rbp-78h]
  __int64 v17; // [rsp+98h] [rbp-70h]
  __int64 v18; // [rsp+A0h] [rbp-68h]
  int v19; // [rsp+A8h] [rbp-60h]
  int v20; // [rsp+ACh] [rbp-5Ch]
  __int128 v21; // [rsp+B0h] [rbp-58h]
  __int64 v22; // [rsp+C8h] [rbp-40h]
  _BYTE v23[80]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v24; // [rsp+128h] [rbp+20h]
  __int64 v25; // [rsp+130h] [rbp+28h]
  __int64 v26; // [rsp+138h] [rbp+30h]
  const wchar_t *v27; // [rsp+140h] [rbp+38h]
  __int64 v28; // [rsp+148h] [rbp+40h]

  v28 = 0LL;
  v16.GrantedAccess = 0;
  v20 = 0;
  RunRef.Count = 0LL;
  Handle = 0LL;
  *(_QWORD *)&SourceString.Length = 2883626LL;
  SourceString.Buffer = L"\\SystemRoot\\System32\\";
  v5 = operator new[](0x474uLL, 0x4B677844u, 256LL, a4);
  v6 = (void *)v5;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 4) = 1140;
    *(_DWORD *)v5 = 1140;
    *(_DWORD *)(v5 + 8) = 1;
    *(_QWORD *)(v5 + 64) = v5 + 1096;
    *(_WORD *)(v5 + 58) = SourceString.MaximumLength;
    RtlCopyUnicodeString((PUNICODE_STRING)(v5 + 56), &SourceString);
    memset(v23, 0, sizeof(v23));
    v28 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v27 = L"\\SystemRoot\\System32\\csrss.exe";
    v22 = 88LL;
    v24 = 40LL;
    v25 = 131077LL;
    v26 = 60LL;
    v16.HandleAttributes = 48;
    v19 = 576;
    v21 = 0LL;
    LOBYTE(v8) = ZwCreateUserProcess(&RunRef);
    v7 = v8;
    if ( v8 >= 0 )
    {
      Object = 0LL;
      v9 = ObReferenceObjectByHandle(RunRef.Ptr, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
      Ptr = RunRef.Ptr;
      v7 = v9;
      *a2 = Object;
      ZwTerminateProcess(Ptr, -1);
      ZwClose(RunRef.Ptr);
      ZwClose(Handle);
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
