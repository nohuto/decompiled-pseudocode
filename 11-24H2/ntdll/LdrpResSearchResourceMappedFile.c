/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x180096010
 * Callers:
 *     LdrResSearchResource @ 0x18002D200 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x1800959F0 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrResFallbackLangList @ 0x180011F70 (LdrResFallbackLangList.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     LdrIsResItemExist @ 0x1800751A0 (LdrIsResItemExist.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180075B00 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpFindMessageInAlternateModule @ 0x180079CC0 (LdrpFindMessageInAlternateModule.c)
 *     LdrpIsReparsePoint @ 0x18007A600 (LdrpIsReparsePoint.c)
 *     LdrpTraceLoadMUIDll @ 0x18009540C (LdrpTraceLoadMUIDll.c)
 *     LdrpResGetMappingSize @ 0x180095500 (LdrpResGetMappingSize.c)
 *     LdrResGetRCConfig @ 0x1800959F0 (LdrResGetRCConfig.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800969C0 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResCompareServiceChecksum @ 0x180097E0C (LdrpResCompareServiceChecksum.c)
 *     LdrpResGetResourceDirectory @ 0x180097F40 (LdrpResGetResourceDirectory.c)
 *     RtlLcidToLocaleName @ 0x180099060 (RtlLcidToLocaleName.c)
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        PVOID DllHandle,
        ULONG64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int **a6,
        __int64 *a7,
        void *a8,
        unsigned int *a9)
{
  PVOID v11; // rsi
  __int64 v12; // rcx
  unsigned __int16 v13; // r12
  int v14; // ebx
  int v15; // r13d
  int v16; // r14d
  bool v17; // di
  ULONG64 v18; // rbx
  __int64 result; // rax
  __int64 v20; // r12
  bool v21; // bl
  int MessageInAlternateModule; // esi
  unsigned int v23; // edi
  unsigned __int16 *v24; // r10
  int v25; // r11d
  __int64 *v26; // rax
  __int64 v27; // rdx
  int v28; // r9d
  int v29; // r8d
  int v30; // ecx
  unsigned int *v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdi
  bool v34; // al
  __int16 v35; // cx
  int RCConfig; // eax
  __int64 v37; // r8
  LANGID v38; // cx
  NTSTATUS v39; // eax
  ULONG64 v40; // rdx
  __int64 v41; // rcx
  unsigned __int64 v42; // r8
  unsigned int v43; // r13d
  int v44; // [rsp+70h] [rbp-3C8h]
  bool v45; // [rsp+74h] [rbp-3C4h]
  char v46; // [rsp+75h] [rbp-3C3h]
  char v47; // [rsp+76h] [rbp-3C2h]
  unsigned __int16 v48; // [rsp+78h] [rbp-3C0h] BYREF
  ULONG_PTR ResourceOffset; // [rsp+80h] [rbp-3B8h] BYREF
  PVOID ResourceDllBase; // [rsp+88h] [rbp-3B0h] BYREF
  PVOID DllHandlea; // [rsp+90h] [rbp-3A8h]
  ULONG64 Size; // [rsp+98h] [rbp-3A0h]
  int v53; // [rsp+A0h] [rbp-398h]
  __int64 v54; // [rsp+A8h] [rbp-390h] BYREF
  unsigned int **v55; // [rsp+B0h] [rbp-388h]
  unsigned int *v56; // [rsp+B8h] [rbp-380h]
  __int64 v57; // [rsp+C0h] [rbp-378h] BYREF
  __int64 v58; // [rsp+C8h] [rbp-370h] BYREF
  __int64 v59; // [rsp+D0h] [rbp-368h]
  __int64 v60; // [rsp+D8h] [rbp-360h]
  __int64 *v61; // [rsp+E0h] [rbp-358h]
  void *v62; // [rsp+E8h] [rbp-350h]
  _QWORD v63[2]; // [rsp+F0h] [rbp-348h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+100h] [rbp-338h] BYREF
  _QWORD v65[2]; // [rsp+110h] [rbp-328h] BYREF
  __int64 v66; // [rsp+120h] [rbp-318h]
  unsigned __int16 v67[2]; // [rsp+130h] [rbp-308h] BYREF
  _WORD v68[262]; // [rsp+134h] [rbp-304h]
  _WORD Src[88]; // [rsp+340h] [rbp-F8h] BYREF

  v66 = a4;
  Size = a2;
  v11 = DllHandle;
  DllHandlea = DllHandle;
  v61 = a7;
  v55 = a6;
  v62 = a8;
  v56 = a9;
  ResourceDllBase = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v67[1] = 0;
  memset_thunk_772440563353939046(v67, 0, 0x206uLL);
  v48 = 0;
  ResourceOffset = 0LL;
  v45 = 0;
  v53 = a3 & 0x40;
  v54 = 0LL;
  v46 = 0;
  LocaleName = 0LL;
  v47 = 0;
  v63[0] = 4980810LL;
  v63[1] = L"LdrpResSearchResourceMappedFile Enter";
  v65[0] = 4849736LL;
  v65[1] = L"LdrpResSearchResourceMappedFile Exit";
  if ( RtlGetCurrentServiceSessionId() )
    v12 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v12 = 2147353477LL;
  if ( (*(_BYTE *)v12 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v41 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v41 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v63, *(unsigned __int8 *)v41);
  }
  v13 = 0;
  v14 = a3 & 0x80;
  v15 = a5;
  if ( a5 == 3 )
  {
    v13 = *(_WORD *)(a4 + 16);
    v34 = (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp(*(const wchar_t **)a4, L"MUI");
    v45 = v34;
  }
  v16 = a3 & 0x80;
  if ( (a3 & 0x10) == 0 )
  {
    v16 = a3 & 0x80;
    if ( a5 >= 1 && a5 <= 3 )
    {
      if ( a5 == 3 )
        v35 = *(_WORD *)(a4 + 16);
      else
        v35 = 0;
      if ( (a3 & 0x1000000) != 0 )
      {
        a3 |= 0x10u;
        v16 = v14;
      }
      else if ( ((*(_QWORD *)a4 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v45
             || (~(_BYTE)a3 & 8) == 0
             || (v35 & 0xF3FF) != 0
             || v35 == 3072 )
      {
        RCConfig = LdrResGetRCConfig((__int64)v11, Size, 0LL, a3, 1);
        MessageInAlternateModule = RCConfig;
        v44 = RCConfig;
        if ( RCConfig >= 0 )
        {
          v11 = DllHandlea;
          v16 = v14 | LdrIsResItemExist(DllHandlea, (const wchar_t **)a4, v37, a3);
        }
        else
        {
          if ( RCConfig != -1073741686 )
            goto LABEL_41;
          v16 = v14 | 0x80000;
          v11 = DllHandlea;
        }
      }
      else
      {
        a3 |= 0x10u;
        v16 = v14;
      }
    }
  }
  if ( (v16 & 0x60000) != 0x60000 )
  {
    v17 = 0;
    if ( (~(_BYTE)a3 & 0x10) != 0 && (~v16 & 0x80000) != 0 )
      v17 = (~v16 & 0x20000) != 0;
    v67[0] = 1;
    v68[0] = 0;
    if ( !v17 && a5 != 3 || (a3 & 0x10) != 0 && (a3 & 0x20) != 0 )
    {
      v18 = Size;
    }
    else
    {
      if ( (a3 & 4) != 0 )
        v16 |= 4u;
      v18 = Size;
      result = LdrResFallbackLangList(v11, Size, v13, v16, v67);
      if ( (int)result < 0 && (a3 & 0x1000) != 0 )
        return result;
    }
    if ( (a3 & 0x10) != 0 || (~v16 & 0x40000) != 0 || (v16 & 0x80000) != 0 )
    {
      result = LdrpResGetResourceDirectory(v11, v18, (__int64)&v57);
      if ( (int)result < 0 )
        return result;
    }
    v20 = v66;
LABEL_15:
    v21 = 0;
    if ( (v16 & 0x20000) == 0 )
      v21 = v17;
    MessageInAlternateModule = 0;
    v44 = 0;
    ResourceOffset = 0LL;
    v48 = 0;
    v23 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v23 >= v67[0] )
        {
LABEL_40:
          if ( MessageInAlternateModule >= 0 )
            goto LABEL_41;
          v17 = v21;
          if ( v21 )
          {
            if ( v47 || v46 || (int)LdrpIsReparsePoint((__int64)DllHandlea) < 0 )
            {
              if ( (v16 & 0x40000) != 0 )
              {
                v17 = 0;
              }
              else
              {
                v16 |= 0x20000u;
                v17 = v21;
              }
            }
            else
            {
              v16 |= 0x400000u;
              v47 = 1;
              v17 = v21;
            }
          }
          if ( !v17 )
            goto LABEL_41;
          goto LABEL_15;
        }
        if ( v21 )
          break;
LABEL_20:
        v54 = 0LL;
        v24 = &v48;
        if ( v21 )
          v24 = 0LL;
        v25 = a3;
        if ( v21 )
          v25 = a3 | 0x20;
        v26 = &v54;
        if ( v61 )
          v26 = v61;
        v27 = v57;
        if ( v21 )
          v27 = v58;
        v28 = v59;
        if ( v21 )
          v28 = v60;
        v29 = Size;
        if ( v21 )
          v29 = ResourceOffset;
        v30 = (int)DllHandlea;
        if ( v21 )
          v30 = (int)ResourceDllBase;
        MessageInAlternateModule = LdrpResSearchResourceInsideDirectory(
                                     v30,
                                     0,
                                     v29,
                                     v28,
                                     v27,
                                     0LL,
                                     v20,
                                     v15,
                                     (__int64)v67,
                                     (__int64)v55,
                                     (__int64)v26,
                                     v25,
                                     (__int64)v24);
        v44 = MessageInAlternateModule;
        if ( v53 && (~v16 & 0x40000) != 0 && MessageInAlternateModule >= 0 && v55 && v21 )
        {
          v42 = v61 ? *v61 : v54;
          MessageInAlternateModule = LdrpFindMessageInAlternateModule(
                                       (unsigned __int64)ResourceDllBase,
                                       *v55,
                                       v42,
                                       *(_DWORD *)(v20 + 24),
                                       1);
          v44 = MessageInAlternateModule;
          if ( MessageInAlternateModule < 0 )
          {
            *v55 = 0LL;
            if ( MessageInAlternateModule == -1073741701 )
              goto LABEL_41;
          }
        }
        if ( MessageInAlternateModule >= 0 )
        {
          v31 = v56;
          if ( v56 )
          {
            if ( v48 )
            {
              LocaleName.Buffer = Src;
              LocaleName.MaximumLength = 172;
              MessageInAlternateModule = RtlLcidToLocaleName(v48, &LocaleName, 2u, 0);
              v44 = MessageInAlternateModule;
              if ( MessageInAlternateModule < 0 )
                goto LABEL_41;
              v43 = LocaleName.Length >> 1;
              v31 = v56;
            }
            else
            {
              Src[0] = 0;
              v43 = 0;
            }
            if ( v43 >= *v31 || !v62 )
            {
              *v31 = v43 + 1;
              MessageInAlternateModule = -1073741789;
              v44 = -1073741789;
              v32 = 2147353477LL;
              v33 = 2147353476LL;
              goto LABEL_42;
            }
            memmove(v62, Src, 2LL * v43);
            *v56 = v43 + 1;
            *((_WORD *)v62 + v43) = 0;
            v15 = a5;
          }
          goto LABEL_40;
        }
        if ( !v21 || (unsigned __int8)LdrpResCompareServiceChecksum(DllHandlea, Size, ResourceDllBase, ResourceOffset) )
          goto LABEL_40;
LABEL_49:
        ++v23;
      }
      ResourceDllBase = 0LL;
      ResourceOffset = 0LL;
      v38 = v68[4 * v23];
      if ( v38 )
      {
        if ( *(_DWORD *)&v68[4 * v23 + 2] == 10 )
        {
          MessageInAlternateModule = -1073741811;
          v44 = -1073741811;
          goto LABEL_49;
        }
        v48 = v68[4 * v23];
        v39 = LdrLoadAlternateResourceModuleEx(DllHandlea, v38, &ResourceDllBase, &ResourceOffset, v16 | 0x1000);
        MessageInAlternateModule = v39;
        v44 = v39;
        if ( v39 >= 0 )
        {
          v46 = 1;
          v40 = ResourceOffset;
          if ( !ResourceOffset )
          {
            MessageInAlternateModule = LdrpResGetMappingSize((__int64)ResourceDllBase, &ResourceOffset, 512, 1);
            v44 = MessageInAlternateModule;
            v40 = ResourceOffset;
          }
          if ( (a3 & 0x1000) != 0 && MessageInAlternateModule < 0 )
            goto LABEL_40;
          MessageInAlternateModule = LdrpResGetResourceDirectory(ResourceDllBase, v40, (__int64)&v58);
          v44 = MessageInAlternateModule;
          if ( MessageInAlternateModule < 0 )
            goto LABEL_49;
          goto LABEL_20;
        }
        if ( v39 != -1073741766 && v39 != -1073741772 )
          goto LABEL_49;
        MessageInAlternateModule = -1073020927;
        v44 = -1073020927;
        ++v23;
      }
      else
      {
        if ( *(_DWORD *)&v68[4 * v23 + 2] == 2 )
          goto LABEL_49;
        MessageInAlternateModule = -1073741811;
        v44 = -1073741811;
        ++v23;
      }
    }
  }
  MessageInAlternateModule = -1073741686;
  v44 = -1073741686;
LABEL_41:
  v32 = 2147353477LL;
  v33 = 2147353476LL;
LABEL_42:
  if ( RtlGetCurrentServiceSessionId() )
  {
    v32 = (__int64)NtCurrentPeb()->SharedData + 555;
    MessageInAlternateModule = v44;
  }
  if ( (*(_BYTE *)v32 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v33 = (__int64)NtCurrentPeb()->SharedData + 554;
      MessageInAlternateModule = v44;
    }
    LdrpTraceLoadMUIDll((unsigned __int16 *)v65, *(unsigned __int8 *)v33);
  }
  return (unsigned int)MessageInAlternateModule;
}
