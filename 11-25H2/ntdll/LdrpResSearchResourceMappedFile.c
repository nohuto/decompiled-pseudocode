/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x1800A4170
 * Callers:
 *     LdrResSearchResource @ 0x180003A20 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x1800A3B50 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     LdrIsResItemExist @ 0x18001B220 (LdrIsResItemExist.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpFindMessageInAlternateModule @ 0x18001FD40 (LdrpFindMessageInAlternateModule.c)
 *     LdrResFallbackLangList @ 0x18008ADF0 (LdrResFallbackLangList.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A3730 (LdrpTraceLoadMUIDll.c)
 *     LdrpResGetMappingSize @ 0x1800A3820 (LdrpResGetMappingSize.c)
 *     LdrResGetRCConfig @ 0x1800A3B50 (LdrResGetRCConfig.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800A4B20 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResCompareServiceChecksum @ 0x1800A5F6C (LdrpResCompareServiceChecksum.c)
 *     LdrpResGetResourceDirectory @ 0x1800A60A0 (LdrpResGetResourceDirectory.c)
 *     RtlLcidToLocaleName @ 0x1800A75A0 (RtlLcidToLocaleName.c)
 *     LdrpIsReparsePoint @ 0x1800D02AC (LdrpIsReparsePoint.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        PVOID DllHandle,
        ULONG64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int **a6,
        unsigned __int64 *a7,
        void *a8,
        unsigned int *a9)
{
  PVOID v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int16 v15; // r12
  int v16; // ebx
  int v17; // r13d
  int v18; // r14d
  bool v19; // di
  ULONG64 v20; // rbx
  __int64 result; // rax
  __int64 v22; // r12
  ULONG64 v23; // rdx
  bool v24; // bl
  int MessageInAlternateModule; // esi
  unsigned int v26; // edi
  unsigned __int16 *v27; // r10
  int v28; // r11d
  unsigned __int64 *v29; // rax
  __int64 v30; // rdx
  int v31; // r9d
  int v32; // r8d
  int v33; // ecx
  unsigned int *v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rdi
  bool v37; // al
  __int16 v38; // cx
  int RCConfig; // eax
  LANGID v40; // cx
  NTSTATUS v41; // eax
  __int64 v42; // rcx
  unsigned __int64 v43; // r8
  unsigned int v44; // r13d
  int v45; // [rsp+70h] [rbp-3C8h]
  bool v46; // [rsp+74h] [rbp-3C4h]
  char v47; // [rsp+75h] [rbp-3C3h]
  char v48; // [rsp+76h] [rbp-3C2h]
  unsigned __int16 v49; // [rsp+78h] [rbp-3C0h] BYREF
  ULONG_PTR ResourceOffset; // [rsp+80h] [rbp-3B8h] BYREF
  PVOID ResourceDllBase; // [rsp+88h] [rbp-3B0h] BYREF
  PVOID DllHandlea; // [rsp+90h] [rbp-3A8h]
  ULONG64 Size; // [rsp+98h] [rbp-3A0h]
  int v54; // [rsp+A0h] [rbp-398h]
  unsigned __int64 v55; // [rsp+A8h] [rbp-390h] BYREF
  unsigned int **v56; // [rsp+B0h] [rbp-388h]
  unsigned int *v57; // [rsp+B8h] [rbp-380h]
  __int64 v58; // [rsp+C0h] [rbp-378h] BYREF
  __int64 v59; // [rsp+C8h] [rbp-370h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-368h]
  __int64 v61; // [rsp+D8h] [rbp-360h]
  unsigned __int64 *v62; // [rsp+E0h] [rbp-358h]
  void *v63; // [rsp+E8h] [rbp-350h]
  _QWORD v64[2]; // [rsp+F0h] [rbp-348h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+100h] [rbp-338h] BYREF
  _QWORD v66[2]; // [rsp+110h] [rbp-328h] BYREF
  __int64 v67; // [rsp+120h] [rbp-318h]
  unsigned __int16 v68[2]; // [rsp+130h] [rbp-308h] BYREF
  _WORD v69[262]; // [rsp+134h] [rbp-304h]
  _WORD Src[88]; // [rsp+340h] [rbp-F8h] BYREF

  v67 = a4;
  Size = a2;
  v11 = DllHandle;
  DllHandlea = DllHandle;
  v62 = a7;
  v56 = a6;
  v63 = a8;
  v57 = a9;
  ResourceDllBase = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v68[1] = 0;
  memset_thunk_772440563353939046(v68, 0, 0x206uLL);
  v49 = 0;
  ResourceOffset = 0LL;
  v46 = 0;
  v54 = a3 & 0x40;
  v55 = 0LL;
  v47 = 0;
  LocaleName = 0LL;
  v48 = 0;
  v64[0] = 4980810LL;
  v64[1] = L"LdrpResSearchResourceMappedFile Enter";
  v66[0] = 4849736LL;
  v66[1] = L"LdrpResSearchResourceMappedFile Exit";
  if ( RtlGetCurrentServiceSessionId() )
    v14 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v14 = 2147353477LL;
  if ( (*(_BYTE *)v14 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v42 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v42 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v64, *(unsigned __int8 *)v42);
  }
  v15 = 0;
  v16 = a3 & 0x80;
  v17 = a5;
  if ( a5 == 3 )
  {
    v15 = *(_WORD *)(a4 + 16);
    v37 = (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp(*(const wchar_t **)a4, L"MUI");
    v46 = v37;
  }
  v18 = a3 & 0x80;
  if ( (a3 & 0x10) == 0 )
  {
    v18 = a3 & 0x80;
    if ( a5 >= 1 && a5 <= 3 )
    {
      if ( a5 == 3 )
        v38 = *(_WORD *)(a4 + 16);
      else
        v38 = 0;
      if ( (a3 & 0x1000000) != 0 )
      {
        a3 |= 0x10u;
        v18 = v16;
      }
      else if ( ((*(_QWORD *)a4 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v46
             || (~(_BYTE)a3 & 8) == 0
             || (v38 & 0xF3FF) != 0
             || v38 == 3072 )
      {
        RCConfig = LdrResGetRCConfig((__int64)v11, Size, 0LL, a3, 1);
        MessageInAlternateModule = RCConfig;
        v45 = RCConfig;
        if ( RCConfig >= 0 )
        {
          v11 = DllHandlea;
          v18 = v16 | LdrIsResItemExist(DllHandlea, (const wchar_t **)a4, v12, a3);
        }
        else
        {
          if ( RCConfig != -1073741686 )
            goto LABEL_42;
          v18 = v16 | 0x80000;
          v11 = DllHandlea;
        }
      }
      else
      {
        a3 |= 0x10u;
        v18 = v16;
      }
    }
  }
  if ( (v18 & 0x60000) != 0x60000 )
  {
    v19 = 0;
    if ( (~(_BYTE)a3 & 0x10) != 0 && (~v18 & 0x80000) != 0 )
      v19 = (~v18 & 0x20000) != 0;
    v68[0] = 1;
    v69[0] = 0;
    if ( !v19 && a5 != 3 || (a3 & 0x10) != 0 && (a3 & 0x20) != 0 )
    {
      v20 = Size;
    }
    else
    {
      if ( (a3 & 4) != 0 )
        v18 |= 4u;
      v20 = Size;
      result = LdrResFallbackLangList(v11, Size, v15, v18, v68);
      if ( (int)result < 0 && (a3 & 0x1000) != 0 )
        return result;
    }
    if ( (a3 & 0x10) != 0 || (~v18 & 0x40000) != 0 || (v18 & 0x80000) != 0 )
    {
      result = LdrpResGetResourceDirectory(v11, v20, (__int64)&v58);
      if ( (int)result < 0 )
        return result;
    }
    v22 = v67;
LABEL_15:
    v23 = 0LL;
    v24 = 0;
    if ( (v18 & 0x20000) == 0 )
      v24 = v19;
    MessageInAlternateModule = 0;
    v45 = 0;
    ResourceOffset = 0LL;
    v49 = 0;
    v26 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v26 >= v68[0] )
        {
LABEL_41:
          if ( MessageInAlternateModule >= 0 )
            goto LABEL_42;
          v19 = v24;
          if ( v24 )
          {
            if ( v48 || v47 || (int)LdrpIsReparsePoint(DllHandlea, v23, v12, v13) < 0 )
            {
              if ( (v18 & 0x40000) != 0 )
              {
                v19 = 0;
              }
              else
              {
                v18 |= 0x20000u;
                v19 = v24;
              }
            }
            else
            {
              v18 |= 0x400000u;
              v48 = 1;
              v19 = v24;
            }
          }
          if ( !v19 )
            goto LABEL_42;
          goto LABEL_15;
        }
        if ( !v24 )
        {
LABEL_20:
          v55 = 0LL;
          v27 = &v49;
          if ( v24 )
            v27 = 0LL;
          v28 = a3;
          if ( v24 )
            v28 = a3 | 0x20;
          v29 = &v55;
          if ( v62 )
            v29 = v62;
          v30 = v58;
          if ( v24 )
            v30 = v59;
          v31 = v60;
          if ( v24 )
            v31 = v61;
          v32 = Size;
          if ( v24 )
            v32 = ResourceOffset;
          v33 = (int)DllHandlea;
          if ( v24 )
            v33 = (int)ResourceDllBase;
          MessageInAlternateModule = LdrpResSearchResourceInsideDirectory(
                                       v33,
                                       0,
                                       v32,
                                       v31,
                                       v30,
                                       0LL,
                                       v22,
                                       v17,
                                       (__int64)v68,
                                       (__int64)v56,
                                       (__int64)v29,
                                       v28,
                                       (__int64)v27);
          v45 = MessageInAlternateModule;
          if ( v54 && (~v18 & 0x40000) != 0 && MessageInAlternateModule >= 0 && v56 && v24 )
          {
            if ( v62 )
              v43 = *v62;
            else
              v43 = v55;
            MessageInAlternateModule = LdrpFindMessageInAlternateModule(
                                         (unsigned __int64)ResourceDllBase,
                                         *v56,
                                         v43,
                                         *(_DWORD *)(v22 + 24),
                                         1);
            v45 = MessageInAlternateModule;
            v23 = 0LL;
            if ( MessageInAlternateModule < 0 )
            {
              *v56 = 0LL;
              if ( MessageInAlternateModule == -1073741701 )
                goto LABEL_42;
            }
          }
          else
          {
            v23 = 0LL;
          }
          if ( MessageInAlternateModule >= 0 )
          {
            v34 = v57;
            if ( v57 )
            {
              if ( v49 )
              {
                LocaleName.Buffer = Src;
                LocaleName.MaximumLength = 172;
                MessageInAlternateModule = RtlLcidToLocaleName(v49, &LocaleName, 2u, 0);
                v45 = MessageInAlternateModule;
                if ( MessageInAlternateModule < 0 )
                  goto LABEL_42;
                v44 = LocaleName.Length >> 1;
                v34 = v57;
              }
              else
              {
                Src[0] = 0;
                v44 = 0;
              }
              if ( v44 >= *v34 || !v63 )
              {
                *v34 = v44 + 1;
                MessageInAlternateModule = -1073741789;
                v45 = -1073741789;
                v35 = 2147353477LL;
                v36 = 2147353476LL;
                goto LABEL_43;
              }
              memmove(v63, Src, 2LL * v44);
              *v57 = v44 + 1;
              *((_WORD *)v63 + v44) = 0;
              v17 = a5;
            }
            goto LABEL_41;
          }
          if ( !v24 || (unsigned __int8)LdrpResCompareServiceChecksum(DllHandlea, Size, ResourceDllBase, ResourceOffset) )
            goto LABEL_41;
LABEL_50:
          v23 = 0LL;
          goto LABEL_51;
        }
        ResourceDllBase = 0LL;
        ResourceOffset = 0LL;
        v40 = v69[4 * v26];
        if ( v40 )
          break;
        if ( *(_DWORD *)&v69[4 * v26 + 2] == 2 )
          goto LABEL_51;
        MessageInAlternateModule = -1073741811;
        v45 = -1073741811;
        ++v26;
      }
      if ( *(_DWORD *)&v69[4 * v26 + 2] == 10 )
        break;
      v49 = v69[4 * v26];
      v41 = LdrLoadAlternateResourceModuleEx(DllHandlea, v40, &ResourceDllBase, &ResourceOffset, v18 | 0x1000);
      MessageInAlternateModule = v41;
      v45 = v41;
      if ( v41 < 0 )
      {
        if ( v41 != -1073741766 && v41 != -1073741772 )
          goto LABEL_50;
        MessageInAlternateModule = -1073020927;
        v45 = -1073020927;
        v23 = 0LL;
        ++v26;
      }
      else
      {
        v47 = 1;
        v23 = ResourceOffset;
        if ( !ResourceOffset )
        {
          MessageInAlternateModule = LdrpResGetMappingSize((__int64)ResourceDllBase, &ResourceOffset, 512, 1);
          v45 = MessageInAlternateModule;
          v23 = ResourceOffset;
        }
        if ( (a3 & 0x1000) != 0 && MessageInAlternateModule < 0 )
          goto LABEL_41;
        MessageInAlternateModule = LdrpResGetResourceDirectory(ResourceDllBase, v23, (__int64)&v59);
        v45 = MessageInAlternateModule;
        v23 = 0LL;
        if ( MessageInAlternateModule >= 0 )
          goto LABEL_20;
LABEL_51:
        ++v26;
      }
    }
    MessageInAlternateModule = -1073741811;
    v45 = -1073741811;
    goto LABEL_51;
  }
  MessageInAlternateModule = -1073741686;
  v45 = -1073741686;
LABEL_42:
  v35 = 2147353477LL;
  v36 = 2147353476LL;
LABEL_43:
  if ( RtlGetCurrentServiceSessionId() )
  {
    v35 = (__int64)NtCurrentPeb()->SharedData + 555;
    MessageInAlternateModule = v45;
  }
  if ( (*(_BYTE *)v35 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v36 = (__int64)NtCurrentPeb()->SharedData + 554;
      MessageInAlternateModule = v45;
    }
    LdrpTraceLoadMUIDll((unsigned __int16 *)v66, *(unsigned __int8 *)v36);
  }
  return (unsigned int)MessageInAlternateModule;
}
