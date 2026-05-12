/*
 * XREFs of PortPassThroughExValidateNormalizedRequest @ 0x1401B44B8
 * Callers:
 *     PortPassThroughExValidate @ 0x14013B194 (PortPassThroughExValidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortPassThroughExValidateNormalizedRequest(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 result; // rax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // edx
  int v12; // eax
  int v13; // r8d
  char v14; // dl
  bool v15; // zf
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  bool v21; // cc
  __int64 v22; // rdx
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // r9
  char v26; // cl
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v15 = *(_BYTE *)(a1 + 56) == 72;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = *(unsigned int *)(v3 + 16);
  v7 = *(unsigned int *)(v3 + 8);
  if ( v15 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
      return 3221225659LL;
    ZwClose(KeyHandle);
  }
  v9 = *(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 24);
  v10 = *(unsigned __int8 *)(a1 + 17);
  if ( (_BYTE)v10 )
  {
    v11 = *(_DWORD *)(a1 + 28);
    if ( v11 < v9 )
      return 3221225485LL;
    v9 = v11 + v10;
    if ( v11 + v10 > (unsigned int)v6 || v9 > (unsigned int)v7 || v9 < v11 )
      return 3221225485LL;
  }
  v12 = *(_DWORD *)(a1 + 32);
  if ( v12 )
  {
    if ( !*(_QWORD *)(a1 + 40) )
      return 3221225485LL;
  }
  v13 = *(_DWORD *)(a1 + 36);
  if ( v13 )
  {
    if ( !*(_QWORD *)(a1 + 48) )
      return 3221225485LL;
  }
  v14 = *(_BYTE *)(a1 + 18);
  if ( v14 == 2 )
  {
    if ( v13 || v12 || *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 40) )
      return 3221225485LL;
  }
  else
  {
    if ( (!v14 || v14 == 3) && !v12 || ((v14 - 1) & 0xFD) == 0 && !v13 )
      return 3221225485LL;
    if ( !v14 )
    {
      if ( v13 )
        return 3221225485LL;
      v15 = *(_QWORD *)(a1 + 48) == 0LL;
      goto LABEL_22;
    }
  }
  if ( v14 != 1 )
    goto LABEL_23;
  if ( *(_DWORD *)(a1 + 32) )
    return 3221225485LL;
  v15 = *(_QWORD *)(a1 + 40) == 0LL;
LABEL_22:
  if ( !v15 )
    return 3221225485LL;
LABEL_23:
  if ( a3 )
    goto LABEL_50;
  if ( !v14 )
  {
    v16 = *(unsigned int *)(a1 + 32);
    if ( !(_DWORD)v16 )
      return 3221225485LL;
    v17 = *(_QWORD *)(a1 + 40);
    if ( v17 < v9 )
      return 3221225485LL;
    v18 = v17 + v16;
LABEL_48:
    v21 = v18 <= v6;
    goto LABEL_49;
  }
  if ( v14 != 1 )
  {
    if ( v14 != 3 )
      goto LABEL_50;
    v22 = *(unsigned int *)(a1 + 32);
    if ( !(_DWORD)v22 )
      return 3221225485LL;
    v23 = *(_QWORD *)(a1 + 40);
    if ( v23 < v9 )
      return 3221225485LL;
    if ( v23 + v22 > v6 )
      return 3221225485LL;
    if ( v23 + v22 > v7 )
      return 3221225485LL;
    v24 = *(unsigned int *)(a1 + 36);
    if ( !(_DWORD)v24 )
      return 3221225485LL;
    v25 = *(_QWORD *)(a1 + 48);
    if ( v25 < (unsigned int)(v22 + v23) )
      return 3221225485LL;
    v18 = v25 + v24;
    if ( v18 > v7 )
      return 3221225485LL;
    goto LABEL_48;
  }
  v19 = *(unsigned int *)(a1 + 36);
  if ( !(_DWORD)v19 )
    return 3221225485LL;
  v20 = *(_QWORD *)(a1 + 48);
  if ( v20 < v9 )
    return 3221225485LL;
  v21 = v20 + v19 <= v7;
LABEL_49:
  if ( !v21 )
    return 3221225485LL;
LABEL_50:
  if ( (unsigned int)(*(_DWORD *)(a1 + 20) - 1) > 0x1A5DF )
    return 3221225485LL;
  v26 = *(_BYTE *)(a1 + 56);
  if ( v26 == 24 || v26 == 57 )
    return 3221225488LL;
  result = 3221225488LL;
  if ( v26 != 58 )
    return 0LL;
  return result;
}
