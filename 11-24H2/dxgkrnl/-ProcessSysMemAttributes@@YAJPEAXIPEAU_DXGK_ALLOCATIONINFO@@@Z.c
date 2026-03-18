/*
 * XREFs of ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x14032EE64
 * Callers:
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x14032DAA0 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140356E10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall ProcessSysMemAttributes(PVOID BaseAddress, unsigned int a2, struct _DXGK_ALLOCATIONINFO *a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v4; // esi
  unsigned __int64 v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  __int64 v10; // rsi
  NTSTATUS v11; // eax
  UINT v12; // edx
  UINT Alignment; // eax
  ULONG_PTR ReturnLength; // [rsp+80h] [rbp+8h] BYREF

  v3 = a2;
  ReturnLength = 0LL;
  v4 = a2 >> 12;
  v7 = 48LL * (a2 >> 12);
  if ( !is_mul_ok(a2 >> 12, 0x30uLL) )
    v7 = -1LL;
  v8 = (_DWORD *)operator new[](v7, 0x4B677844u, 256LL);
  v9 = v8;
  if ( v8 )
  {
    v11 = ZwQueryVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            BaseAddress,
            MemoryBasicInformation,
            v8,
            48 * v4,
            &ReturnLength);
    v10 = v11;
    if ( v11 >= 0 )
    {
      if ( *((_QWORD *)v9 + 3) >= v3 )
      {
        if ( (v9[10] & 0x800000) != 0 )
        {
          LODWORD(v10) = -1073741811;
          WdLogSingleEntry1(2LL, -1073741811LL);
          WdLogGlobalForLineNumber = 3952;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"ExistingSysMem pointer points to a MEM_ROTATE allocation, returning 0x%I64x",
            -1073741811LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          v12 = a3->Flags.Value | 4;
          if ( (v9[9] & 0x600) != 0 )
            v12 = a3->Flags.Value & 0xFFFFFFFB;
          a3->Flags.Value = v12;
          if ( (v9[10] & 0x20400000) != 0 )
          {
            Alignment = a3->Alignment;
            if ( !Alignment || (_WORD)Alignment )
              a3->Alignment = 0x10000;
          }
        }
      }
      else
      {
        LODWORD(v10) = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 3940;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"ExistingSysMem with different page attributes not supported. Returning 0x%I64x",
          -1073741811LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v11);
      WdLogGlobalForLineNumber = 3933;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"QueryVirtualMemory failed. Returning 0x%I64x",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 3917;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Couldn't allocate MEMORY_BASIC_INFORMATION.",
      3917LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v10) = -1073741801;
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
  return (unsigned int)v10;
}
