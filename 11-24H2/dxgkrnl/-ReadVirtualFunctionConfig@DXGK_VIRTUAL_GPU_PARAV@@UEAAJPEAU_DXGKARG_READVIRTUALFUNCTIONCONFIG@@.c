/*
 * XREFs of ?ReadVirtualFunctionConfig@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z @ 0x1403DC1A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     DpReadDeviceSpace @ 0x140042CA0 (DpReadDeviceSpace.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::ReadVirtualFunctionConfig(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_READVIRTUALFUNCTIONCONFIG *a2)
{
  unsigned int v4; // ebp
  __int64 Offset; // rdx
  __int64 v6; // r15
  _BYTE *Data; // r14
  unsigned int i; // edi
  ULONG v9; // edx
  size_t Length; // rcx
  char *v11; // rdx
  __int64 v13; // rdx
  __int64 VirtualFunctionIndex; // rax
  _BYTE v15[160]; // [rsp+0h] [rbp-118h] BYREF
  ULONG v16; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+D8h] [rbp-40h]
  __int64 v18; // [rsp+E0h] [rbp-38h]

  v4 = 0;
  if ( !g_PciConfig.VendorID )
  {
    dword_140160232 = 458894;
    g_PciConfig.VendorID = 5140;
    dword_140160236 = 16;
    dword_14016023A = 770;
    word_14016023E = 0;
    qword_140160240 = 0LL;
    qword_140160248 = 0LL;
    qword_140160250 = 0LL;
    dword_140160258 = 0;
    qword_14016025C = 0LL;
    qword_140160264 = 64LL;
    dword_14016026C = 0;
  }
  Offset = a2->Offset;
  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 216LL);
  if ( (unsigned int)Offset >= 0xC0 )
  {
    Length = a2->Length;
    if ( (unsigned int)(Length + Offset) > 0xD0 )
    {
      if ( (unsigned int)Offset < 0xD0 )
        goto LABEL_4;
      Length = a2->Length;
      if ( (unsigned int)(Length + Offset) > 0xD4 )
      {
        if ( (unsigned int)Offset < 0xD4 )
          goto LABEL_4;
        Length = a2->Length;
        if ( (unsigned int)(Length + Offset) > 0xDC )
        {
          if ( (unsigned int)Offset < 0xDC )
            goto LABEL_4;
          Length = a2->Length;
          if ( (unsigned int)(Length + Offset) > 0xE0 )
            goto LABEL_4;
          v13 = Offset + 164;
        }
        else
        {
          v13 = Offset - 184;
        }
        v11 = (char *)this + v13;
      }
      else
      {
        v16 = 44;
        v11 = &v15[Offset];
      }
    }
    else
    {
      v11 = &v15[Offset + 24];
      v17 = *(_QWORD *)((char *)this + 28);
      v18 = 0LL;
    }
    memmove(a2->Data, v11, Length);
    return v4;
  }
LABEL_4:
  Data = a2->Data;
  for ( i = 0; i < a2->Length; ++i )
  {
    v9 = i + a2->Offset;
    if ( v9 >= 0x100 )
    {
      Data[i] = 0;
    }
    else if ( v9 >= 4 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 444LL) & 4) != 0 )
    {
      Data[i] = *((_BYTE *)&g_PciConfig.VendorID + v9);
    }
    else
    {
      v16 = 0;
      v4 = DpReadDeviceSpace(v6, 0LL, &Data[i], v9, 1u, &v16);
      if ( (v4 & 0x80000000) != 0 || v16 != 1 )
      {
        WdLogSingleEntry1(2LL, a2->VirtualFunctionIndex);
        VirtualFunctionIndex = a2->VirtualFunctionIndex;
        WdLogGlobalForLineNumber = 137;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to read PCI config space: %I64n",
          VirtualFunctionIndex,
          0LL,
          0LL,
          0LL,
          0LL);
        return v4;
      }
    }
  }
  return v4;
}
