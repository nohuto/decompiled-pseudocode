/*
 * XREFs of ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x14039AC30
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14038F660 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z @ 0x14039B088 (-GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z.c)
 *     ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x14039B1E0 (-DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetUmdFileVersion(union _LARGE_INTEGER *this, union _LARGE_INTEGER *a2)
{
  enum _KMTUMDVERSION v2; // ebx
  __int64 v5; // rdi
  int UMDFileName; // eax
  const WCHAR *v8; // r14
  unsigned __int64 v9; // r12
  size_t v10; // rax
  __int64 v11; // r9
  __int16 v12; // di
  int FileVersion; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  size_t v18; // rdi
  __int64 v19; // r9
  unsigned __int16 MaximumLength; // ax
  size_t v21; // rdi
  int v22; // eax
  const WCHAR *v23; // rax
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-20h] BYREF
  wchar_t *Src[2]; // [rsp+60h] [rbp-10h] BYREF
  int v26; // [rsp+A0h] [rbp+30h] BYREF

  v2 = KMTUMDVERSION_DX9;
  v26 = 0;
  Destination = 0LL;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3982;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pFileVersion != NULL", 3982LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[90].QuadPart != -1 )
  {
    LODWORD(v5) = 0;
LABEL_5:
    *a2 = this[90];
    goto LABEL_6;
  }
  *(_OWORD *)Src = 0LL;
  do
  {
    UMDFileName = ADAPTER_RENDER::GetUMDFileName((ADAPTER_RENDER *)this, v2, (struct _UNICODE_STRING *)Src);
    v8 = Src[1];
    if ( UMDFileName >= 0 && LOWORD(Src[0]) && (LOWORD(Src[0]) != 4 || *(_DWORD *)Src[1] != 4063292) )
      break;
    ++v2;
  }
  while ( (unsigned int)v2 < (NUM_KMTUMDVERSIONS|KMTUMDVERSION_DX11) );
  if ( v2 == (NUM_KMTUMDVERSIONS|KMTUMDVERSION_DX11) )
  {
    LODWORD(v5) = -1073741811;
    goto LABEL_6;
  }
  v9 = WORD1(Src[0]);
  v10 = wcsnlen(Src[1], (unsigned __int64)WORD1(Src[0]) >> 1);
  v12 = 2 * v10;
  if ( 2 * v10 >= v9 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4019;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"Size < UmdDriverName.MaximumLength",
      4019LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Destination.Length = 0;
  Destination.MaximumLength = v12 + 12;
  Destination.Buffer = (wchar_t *)operator new[]((unsigned __int16)(v12 + 12), 0x4B677844u, 256LL, v11);
  if ( !Destination.Buffer )
  {
    LODWORD(v5) = -1073741801;
    ((void (__fastcall *)(_QWORD, _QWORD))WdLogSingleEntry1)(6LL, (union _LARGE_INTEGER)this[2].QuadPart);
    WdLogGlobalForLineNumber = 4030;
    goto LABEL_36;
  }
  RtlAppendUnicodeToString(&Destination, L"\\??\\");
  RtlAppendUnicodeToString(&Destination, v8);
  FileVersion = DxgkpGetFileVersion(&Destination, this + 90, &v26);
  LODWORD(v5) = FileVersion;
  if ( FileVersion >= 0 )
    goto LABEL_5;
  if ( FileVersion == v26 )
  {
    WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
    WdLogGlobalForLineNumber = 4050;
    v18 = 2 * wcsnlen(v8, v9 >> 1);
    if ( v18 >= v9 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4056;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"Size < UmdDriverName.MaximumLength",
        4056LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    MaximumLength = v18 + 56;
    Destination.Length = 0;
    Destination.MaximumLength = v18 + 56;
    if ( Destination.Buffer )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Destination.Buffer);
      MaximumLength = Destination.MaximumLength;
      Destination.Buffer = 0LL;
    }
    Destination.Buffer = (wchar_t *)operator new[](MaximumLength, 0x4B677844u, 256LL, v19);
    if ( Destination.Buffer )
    {
      RtlAppendUnicodeToString(&Destination, L"\\Systemroot\\System32\\");
      RtlAppendUnicodeToString(&Destination, v8);
      v21 = v18 >> 1;
      if ( v21 )
      {
        v23 = &v8[v21 - 1];
        while ( *v23 != 46 )
        {
          --v23;
          if ( !--v21 )
            goto LABEL_27;
        }
      }
      else
      {
LABEL_27:
        RtlAppendUnicodeToString(&Destination, L".DLL");
      }
      v22 = DxgkpGetFileVersion(&Destination, this + 90, 0LL);
      v5 = v22;
      if ( v22 >= 0 )
        goto LABEL_5;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogSingleEntry2)(2LL, (union _LARGE_INTEGER)this[2].QuadPart, v22);
      WdLogGlobalForLineNumber = 4114;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to open the user mode driver DLL on adapter %I64d (ntStatus = %I64d).",
        this[2].QuadPart,
        v5,
        0LL,
        0LL,
        0LL);
      goto LABEL_6;
    }
    LODWORD(v5) = -1073741801;
    ((void (__fastcall *)(_QWORD, _QWORD))WdLogSingleEntry1)(6LL, (union _LARGE_INTEGER)this[2].QuadPart);
    WdLogGlobalForLineNumber = 4074;
LABEL_36:
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for the user mode driver name string on adapter 0x%I64x.",
      this[2].QuadPart,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_6:
  if ( Destination.Buffer )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Destination.Buffer);
  return (unsigned int)v5;
}
