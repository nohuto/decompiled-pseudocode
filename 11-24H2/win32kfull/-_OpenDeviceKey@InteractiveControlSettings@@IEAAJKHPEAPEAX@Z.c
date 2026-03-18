/*
 * XREFs of ?_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z @ 0x14012D0B4
 * Callers:
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x14012B65C (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     ?WriteSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1402EB540 (-WriteSettings@InteractiveControlSettings@@QEAAJXZ.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x14012D650 (RtlUnicodeStringValidateWorker.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14012D69C (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlSettings::_OpenDeviceKey(
        InteractiveControlSettings *this,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  ACCESS_MASK v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  size_t v9; // rdx
  NTSTATUS v10; // ecx
  ULONG v11; // r8d
  const wchar_t *v12; // r10
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  __int16 v15; // bx
  WCHAR *v16; // r11
  unsigned __int64 v17; // r8
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  char v22; // [rsp+90h] [rbp-70h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  v5 = a2;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(this, a2) + 63560) )
  {
    *(_DWORD *)&SourceString.Length = 45875200;
    SourceString.Buffer = (PWSTR)&v22;
    UserSessionState = W32GetUserSessionState(v7, v6);
    v10 = RtlUnicodeStringCopy(
            &SourceString,
            (const struct _UNICODE_STRING *)(*(_QWORD *)(UserSessionState + 63560) + 200LL));
    if ( v10 >= 0 )
    {
      v10 = RtlUnicodeStringValidateWorker(&SourceString, v9, v11);
      if ( v10 >= 0 )
      {
        v12 = L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\InteractiveControl";
        v13 = 0x7FFFLL;
        v10 = 0;
        v14 = (unsigned __int64)SourceString.Length >> 1;
        v15 = 0;
        v16 = &SourceString.Buffer[v14];
        v17 = ((unsigned __int64)SourceString.MaximumLength >> 1) - v14;
        if ( v17 )
        {
          while ( v13 )
          {
            if ( *v12 )
            {
              *v16++ = *v12++;
              --v13;
              ++v15;
              if ( --v17 )
                continue;
            }
            if ( v17 || !v13 || !*v12 )
              break;
            goto LABEL_16;
          }
        }
        else
        {
LABEL_16:
          v10 = -2147483643;
        }
        SourceString.Length = 2 * (v15 + v14);
        if ( v10 >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &SourceString;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v10 = ZwOpenKey(&KeyHandle, v5, &ObjectAttributes);
          if ( v10 < 0 )
            v10 = ZwCreateKey(&KeyHandle, v5, &ObjectAttributes, 0, 0LL, 0, 0LL);
          *a4 = KeyHandle;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v10;
}
