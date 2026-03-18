/*
 * XREFs of ?SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z @ 0x1401D7774
 * Callers:
 *     NtUserSetImeHotKey @ 0x1401D7700 (NtUserSetImeHotKey.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1401A0380 (-FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z.c)
 *     ?GetHotKeyLangID@@YAGK@Z @ 0x1401A0404 (-GetHotKeyLangID@@YAGK@Z.c)
 *     ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z @ 0x1401D51FC (-FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z.c)
 *     Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline @ 0x140280898 (Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FindImeHotKeyByHkl@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@PEAUHKL__@@@Z @ 0x1402B14A4 (-FindImeHotKeyByHkl@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@PEAUHKL__@@@Z.c)
 */

__int64 __fastcall SetImeHotKey(__int64 a1, __int64 a2, int a3, HKL a4, unsigned int a5)
{
  HKL v6; // rdi
  int v8; // r15d
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  unsigned __int16 HotKeyLangID; // bx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByKeyWithLang; // rbx
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct _tagIMEHOTKEYOBJ *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // ecx
  struct tagTHREADINFO *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rbx
  __int64 v36; // rax
  _QWORD **v37; // rdx
  _QWORD *i; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 UserSessionState; // rax
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByHkl; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  struct _tagIMEHOTKEYOBJ *v46; // rbx
  __int64 v47; // rax
  struct _tagIMEHOTKEYOBJ *v48; // rcx
  struct _tagIMEHOTKEYOBJ *v49; // rax

  v6 = (HKL)(int)a1;
  v8 = a2;
  switch ( a5 )
  {
    case 1u:
      if ( (unsigned int)Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline()
        && (unsigned int)((_DWORD)v6 - 67175425) <= 0xFBFDFBFF )
      {
        UserSessionState = W32GetUserSessionState(v40, v39);
        ImeHotKeyByHkl = FindImeHotKeyByHkl(*(const struct _tagIMEHOTKEYOBJ **)(UserSessionState + 12944), v6);
      }
      else
      {
        v45 = W32GetUserSessionState(v40, v39);
        ImeHotKeyByHkl = FindImeHotKeyByID(*(const struct _tagIMEHOTKEYOBJ **)(v45 + 12944), (int)v6);
      }
      v46 = ImeHotKeyByHkl;
      if ( ImeHotKeyByHkl )
      {
        v47 = W32GetUserSessionState(v44, v43);
        v48 = *(struct _tagIMEHOTKEYOBJ **)(v47 + 12944);
        if ( v46 == v48 )
        {
          *(_QWORD *)(v47 + 12944) = *(_QWORD *)v46;
        }
        else
        {
          if ( !v48 )
            return 0LL;
          while ( 1 )
          {
            v49 = *(struct _tagIMEHOTKEYOBJ **)v48;
            if ( *(struct _tagIMEHOTKEYOBJ **)v48 == v46 )
              break;
            v48 = *(struct _tagIMEHOTKEYOBJ **)v48;
            if ( !v49 )
              return 0LL;
          }
          *(_QWORD *)v48 = *(_QWORD *)v46;
        }
        Win32FreePool(v46);
        return 1LL;
      }
      goto LABEL_54;
    case 2u:
      if ( (_WORD)a3 == 231 )
        return 0LL;
      HotKeyLangID = GetHotKeyLangID(a1);
      v15 = W32GetUserSessionState(v14, v13);
      ImeHotKeyByKeyWithLang = FindImeHotKeyByKeyWithLang(
                                 *(struct _tagIMEHOTKEYOBJ **)(v15 + 12944),
                                 v8 & 0xF,
                                 (unsigned __int16)v8 & 0xC000,
                                 a3,
                                 HotKeyLangID);
      if ( ImeHotKeyByKeyWithLang )
      {
        if ( !(unsigned int)Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline() )
        {
          v19 = *((_DWORD *)ImeHotKeyByKeyWithLang + 2) == (_DWORD)v6;
          goto LABEL_13;
        }
        if ( (unsigned int)((_DWORD)v6 - 67175425) <= 0xFBFDFBFF )
        {
          v19 = *((_QWORD *)ImeHotKeyByKeyWithLang + 3) == (_QWORD)a4;
LABEL_13:
          if ( !v19 )
          {
LABEL_31:
            v30 = 1409;
LABEL_55:
            UserSetLastError(v30);
            return 0LL;
          }
          goto LABEL_18;
        }
        if ( *((_DWORD *)ImeHotKeyByKeyWithLang + 2) != (_DWORD)v6 )
          goto LABEL_31;
      }
      else
      {
        v20 = W32GetUserSessionState(v17, v16);
        ImeHotKeyByKeyWithLang = FindImeHotKeyByID(*(const struct _tagIMEHOTKEYOBJ **)(v20 + 12944), (int)v6);
      }
LABEL_18:
      if ( (unsigned int)Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( a4 )
        {
          v23 = W32GetUserSessionState(v22, v21);
          v24 = FindImeHotKeyByHkl(*(const struct _tagIMEHOTKEYOBJ **)(v23 + 12944), a4);
          if ( v24 )
          {
            if ( v24 != ImeHotKeyByKeyWithLang )
            {
              if ( (unsigned int)((_DWORD)v6 - 256) > 0x1F )
              {
                ImeHotKeyByKeyWithLang = v24;
LABEL_24:
                *((_DWORD *)ImeHotKeyByKeyWithLang + 4) = v8;
                *((_DWORD *)ImeHotKeyByKeyWithLang + 3) = a3;
                *((_QWORD *)ImeHotKeyByKeyWithLang + 3) = a4;
                if ( (unsigned int)Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline()
                  && (unsigned int)((_DWORD)v6 - 67175425) <= 0xFBFDFBFF )
                {
                  *((_DWORD *)ImeHotKeyByKeyWithLang + 2) = (_DWORD)v6;
                }
                return 1LL;
              }
              goto LABEL_31;
            }
          }
        }
      }
      if ( ImeHotKeyByKeyWithLang )
        goto LABEL_24;
      if ( !(unsigned int)Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline() || !a4 )
        goto LABEL_33;
      v27 = W32GetUserSessionState(v26, v25);
      if ( FindImeHotKeyByID(*(const struct _tagIMEHOTKEYOBJ **)(v27 + 12944), (int)a4) )
        goto LABEL_31;
      v31 = PtiCurrent(v29, v28);
      if ( HKLtoPKL(v31, a4) )
      {
LABEL_33:
        v32 = Win32AllocPoolZInit(32LL, 1751741269LL);
        v35 = (_QWORD *)v32;
        if ( v32 )
        {
          *(_QWORD *)v32 = 0LL;
          *(_DWORD *)(v32 + 8) = (_DWORD)v6;
          *(_DWORD *)(v32 + 16) = v8;
          *(_DWORD *)(v32 + 12) = a3;
          *(_QWORD *)(v32 + 24) = a4;
          v36 = W32GetUserSessionState(v34, v33);
          v37 = *(_QWORD ***)(v36 + 12944);
          if ( v37 )
          {
            for ( i = *v37; i; i = (_QWORD *)*i )
              v37 = (_QWORD **)i;
            *v37 = v35;
          }
          else
          {
            *(_QWORD *)(v36 + 12944) = v35;
          }
          return 1LL;
        }
        v30 = 14;
        goto LABEL_55;
      }
LABEL_54:
      v30 = 87;
      goto LABEL_55;
    case 3u:
      v10 = *(_QWORD **)(W32GetUserSessionState(a1, a2) + 12944);
      if ( v10 )
      {
        do
        {
          v11 = (_QWORD *)*v10;
          Win32FreePool(v10);
          v10 = v11;
        }
        while ( v11 );
      }
      *(_QWORD *)(W32GetUserSessionState(v10, v9) + 12944) = 0LL;
      return 1LL;
  }
  return 0LL;
}
