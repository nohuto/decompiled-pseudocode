/*
 * XREFs of RtlGetFullPathName_UstrEx @ 0x1800A3020
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180016E20 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A2650 (RtlDosSearchPath_Ustr.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 */

NTSTATUS __cdecl RtlGetFullPathName_UstrEx(
        PUNICODE_STRING FileName,
        PUNICODE_STRING StaticString,
        PUNICODE_STRING DynamicString,
        PUNICODE_STRING *StringUsed,
        SIZE_T *FilePartPrefixCch,
        PBOOLEAN NameInvalid,
        RTL_PATH_TYPE *InputPathType,
        SIZE_T *BytesRequired)
{
  wchar_t *v11; // rbp
  SIZE_T *v12; // rsi
  SIZE_T *v13; // rdi
  RTL_PATH_TYPE *v14; // r14
  WCHAR *v15; // r12
  unsigned __int16 MaximumLength; // ax
  WCHAR *Buffer; // r8
  unsigned int FullPathName_Ustr; // eax
  unsigned int v19; // r13d
  NTSTATUS v20; // ebx
  NTSTATUS result; // eax
  wchar_t *v22; // rax
  _UNICODE_STRING *v23; // r15
  SIZE_T *v24; // r13
  WCHAR *Atom; // rax
  unsigned int v26; // eax
  unsigned __int16 v27; // cx
  signed __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v32; // [rsp+88h] [rbp+10h] BYREF
  PUNICODE_STRING v33; // [rsp+90h] [rbp+18h]
  __int64 v34; // [rsp+98h] [rbp+20h] BYREF

  v33 = DynamicString;
  v32 = 0LL;
  v34 = 0LL;
  v11 = 0LL;
  if ( StringUsed )
    *StringUsed = 0LL;
  v12 = BytesRequired;
  if ( BytesRequired )
    *BytesRequired = 0LL;
  v13 = FilePartPrefixCch;
  if ( FilePartPrefixCch )
    *FilePartPrefixCch = 0LL;
  v14 = InputPathType;
  v15 = 0LL;
  SLODWORD(v34) = *InputPathType;
  if ( StaticString )
  {
    if ( DynamicString && !StringUsed )
    {
      v20 = -1073741811;
      goto LABEL_22;
    }
    MaximumLength = StaticString->MaximumLength;
    Buffer = StaticString->Buffer;
    FilePartPrefixCch = (SIZE_T *)MaximumLength;
LABEL_11:
    LODWORD(BytesRequired) = MaximumLength;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(&FileName->Length, MaximumLength, Buffer, &v32, NameInvalid, &v34);
    v19 = FullPathName_Ustr;
    if ( FullPathName_Ustr )
    {
      if ( StaticString && FullPathName_Ustr < (unsigned int)BytesRequired )
      {
        StaticString->Length = FullPathName_Ustr;
        if ( v13 )
        {
          if ( v32 )
            v28 = (signed __int64)(v32 - (unsigned __int64)StaticString->Buffer) >> 1;
          else
            v28 = 0LL;
          *v13 = v28;
        }
        if ( StringUsed )
          *StringUsed = StaticString;
        v20 = 0;
      }
      else
      {
        v23 = v33;
        if ( v33 )
        {
          if ( v11 && FullPathName_Ustr < (unsigned int)BytesRequired )
          {
            v33->MaximumLength = (unsigned __int16)FilePartPrefixCch;
            v23->Length = FullPathName_Ustr;
            v11[(unsigned __int64)FullPathName_Ustr >> 1] = 0;
            if ( v13 )
            {
              if ( v32 )
                v29 = (v32 - (__int64)v11) >> 1;
              else
                v29 = 0LL;
              *v13 = v29;
            }
            if ( StringUsed )
              *StringUsed = v23;
            v23->Buffer = v11;
            v20 = 0;
            goto LABEL_22;
          }
          while ( 1 )
          {
            if ( (unsigned __int64)v19 + 2 > 0xFFFE )
            {
              v20 = -1073741562;
LABEL_37:
              v15 = 0LL;
              goto LABEL_18;
            }
            v24 = (SIZE_T *)(unsigned __int16)(v19 + 2);
            BytesRequired = v24;
            Atom = (WCHAR *)RtlpAllocateAtom((unsigned int)v24);
            v15 = Atom;
            if ( !Atom )
              break;
            v26 = RtlGetFullPathName_Ustr(&FileName->Length, (int)v24 - 2, Atom, &v32, NameInvalid, &v34);
            v19 = v26;
            if ( !v26 )
              goto LABEL_23;
            v27 = (unsigned __int16)BytesRequired;
            if ( v26 <= (unsigned __int64)BytesRequired - 2 )
            {
              if ( v13 )
              {
                if ( v32 )
                  v30 = (v32 - (__int64)v15) >> 1;
                else
                  v30 = 0LL;
                *v13 = v30;
              }
              v15[(unsigned __int64)v19 >> 1] = 0;
              v23->Buffer = v15;
              v23->Length = v19;
              v23->MaximumLength = v27;
              if ( StringUsed )
                *StringUsed = v23;
              v20 = 0;
              goto LABEL_37;
            }
            RtlpSysVolFree(v15);
          }
          v20 = -1073741801;
        }
        else
        {
          if ( v12 )
            *v12 = FullPathName_Ustr;
          v20 = -1073741789;
        }
      }
    }
    else
    {
LABEL_23:
      v20 = -1073741773;
    }
LABEL_18:
    if ( v11 )
      RtlpSysVolFree(v11);
    if ( v15 )
      RtlpSysVolFree(v15);
LABEL_22:
    result = v20;
    *v14 = v34;
    return result;
  }
  FilePartPrefixCch = (SIZE_T *)520;
  v22 = (wchar_t *)RtlpAllocateAtom(0x208uLL);
  v11 = v22;
  if ( v22 )
  {
    Buffer = v22;
    MaximumLength = 520;
    goto LABEL_11;
  }
  return -1073741801;
}
