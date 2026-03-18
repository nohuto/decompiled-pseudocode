/*
 * XREFs of vInitFontsDirectoryNameInformation @ 0x1C0018500
 * Callers:
 *     <none>
 * Callees:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00194B4 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z @ 0x1C00CFCB8 (-QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z.c)
 */

int vInitFontsDirectoryNameInformation()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  __int64 v2; // rbx
  struct _OBJECT_NAME_INFORMATION *v3; // rax
  unsigned int v4; // r8d
  char v5; // r9
  unsigned __int16 *v6; // rax
  unsigned int v7; // r8d
  int appended; // eax
  _WORD *v9; // rcx
  __int64 v10; // rax
  _QWORD v12[2]; // [rsp+68h] [rbp-9h] BYREF
  STRING Source; // [rsp+78h] [rbp+7h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp+27h] BYREF
  void *FileHandle; // [rsp+D8h] [rbp+67h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v12[1] = L"\\SystemRoot\\Fonts";
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  FileHandle = 0LL;
  Source.Buffer = (PCHAR)L"\\";
  IoStatusBlock = 0LL;
  v12[0] = 2359330LL;
  *(_QWORD *)&Source.Length = 262146LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v12;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v0) = ZwCreateFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x24u, 0LL, 0);
  if ( (int)v0 >= 0 )
  {
    v2 = *(_QWORD *)(SGDGetSessionState(v1) + 32);
    v3 = (struct _OBJECT_NAME_INFORMATION *)Win32AllocPoolZInit(400LL, 1986422343LL);
    *(_QWORD *)(v2 + 19912) = v3;
    if ( v3
      && (QueryNameStringFromHandle(FileHandle, v3, v4, v5) < 0
       || RtlAppendStringToString(*(PSTRING *)(v2 + 19912), &Source) < 0) )
    {
      Win32FreePool(*(void **)(v2 + 19912));
      *(_QWORD *)(v2 + 19912) = 0LL;
    }
    v6 = (unsigned __int16 *)Win32AllocPoolZInit(520LL, 1986422343LL);
    *(_QWORD *)(v2 + 19904) = v6;
    if ( v6 )
    {
      appended = bAppendSysDirectory(v6, &word_1C03123AC, v7);
      v9 = *(_WORD **)(v2 + 19904);
      if ( appended )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( v9[v10] );
        *(_DWORD *)(v2 + 19896) = v10 + 1;
      }
      else
      {
        Win32FreePool(v9);
        *(_QWORD *)(v2 + 19904) = 0LL;
        *(_DWORD *)(v2 + 19896) = 0;
      }
    }
    ZwClose(FileHandle);
    v0 = Win32AllocPoolZInit(400LL, 1986422343LL);
    *(_QWORD *)(v2 + 19920) = v0;
  }
  return v0;
}
