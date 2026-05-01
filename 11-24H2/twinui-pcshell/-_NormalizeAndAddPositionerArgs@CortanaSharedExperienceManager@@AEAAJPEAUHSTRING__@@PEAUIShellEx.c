/*
 * XREFs of ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x18037F3BC
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18037D1C0 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z @ 0x1800576AC (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18010F4B0 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1801BFA80 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x180365D60 (--$-0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z.c)
 *     _alloca_probe @ 0x1806CA270 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaSharedExperienceManager::_NormalizeAndAddPositionerArgs(
        CortanaSharedExperienceManager *this,
        HSTRING a2,
        struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *a3,
        HSTRING *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  PCWSTR StringRawBuffer; // rax
  char *v10; // rbx
  UINT32 v11; // edi
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  HSTRING_HEADER *v14; // rax
  HRESULT v15; // eax
  HSTRING v16; // rax
  HSTRING newString; // [rsp+20h] [rbp-E0h] BYREF
  HSTRING Reserved1; // [rsp+28h] [rbp-D8h] BYREF
  UINT32 length; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  HSTRING string1; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR sourceString[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v25[4172]; // [rsp+64h] [rbp-9Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+10E8h] [rbp+FE8h]

  Reserved1 = a2;
  *a4 = 0LL;
  string1 = 0LL;
  if ( a2 )
  {
    length = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(a2, &length);
    v10 = (char *)StringRawBuffer;
    if ( StringRawBuffer && length )
    {
      v11 = length - 1;
      if ( StringRawBuffer[length - 1] == 47 )
      {
        *(_DWORD *)sourceString = 0;
        memset_0(v25, 0, 0x1044uLL);
        v6 = StringCchCopyNW((char *)sourceString, 2084LL, v10, v11);
        v7 = v6;
        if ( v6 < 0 )
        {
          v8 = 879LL;
          goto LABEL_9;
        }
        Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                               &hstringHeader,
                               sourceString,
                               v12)[1].Reserved.Reserved1;
        v6 = Microsoft::WRL::Wrappers::HString::Set(&string1, &Reserved1);
        v7 = v6;
        if ( v6 < 0 )
        {
          v8 = 880LL;
          goto LABEL_9;
        }
      }
      else
      {
        v6 = Microsoft::WRL::Wrappers::HString::Set(&string1, &Reserved1);
        v7 = v6;
        if ( v6 < 0 )
        {
          v8 = 884LL;
          goto LABEL_9;
        }
      }
    }
  }
  else
  {
    v6 = Microsoft::WRL::Wrappers::HString::Set(&string1, L"StartMode=Proactive", 0x13u);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 867LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_21;
    }
  }
  v21 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v21);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 891LL;
    goto LABEL_9;
  }
  Reserved1 = 0LL;
  if ( v21 == 1 )
    Reserved1 = (HSTRING)L"&Positioner=desktop";
  WindowsDeleteString(0LL);
  newString = 0LL;
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&Reserved1, v13);
  v15 = WindowsConcatString(string1, (HSTRING)v14[1].Reserved.Reserved1, &newString);
  v7 = v15;
  if ( v15 >= 0 )
  {
    v16 = newString;
    newString = 0LL;
    *a4 = v16;
    WindowsDeleteString(0LL);
    newString = 0LL;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x384,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
    WindowsDeleteString(newString);
    newString = 0LL;
  }
LABEL_21:
  WindowsDeleteString(string1);
  return v7;
}
