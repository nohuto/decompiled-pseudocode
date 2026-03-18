/*
 * XREFs of ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x140344070
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140361FE0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140035C88 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x140039508 (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ??_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z @ 0x14003BDD8 (--_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z.c)
 *     ?CreateAllocationHandleSafe@DXGPROCESS@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x14005DB10 (-CreateAllocationHandleSafe@DXGPROCESS@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x14006BA1C (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140349F40 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ??0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14039402C (--0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocationObjects(
        DXGDEVICE *this,
        __int64 a2,
        struct DXGALLOCATION **a3,
        struct DXGRESOURCE *a4,
        struct DXGALLOCATION **a5)
{
  int v8; // edi
  int v9; // ebx
  __int64 v10; // rcx
  char v12; // r13
  int v13; // esi
  __int64 Pool2; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx
  struct DXGALLOCATION *v17; // rax
  DXGADAPTERALLOCATION_VGPU *v18; // rcx
  bool v19; // zf
  DXGALLOCATION *v21; // rax
  DXGADAPTERALLOCATION_VGPU *v22; // rax
  struct DXGALLOCATION *v23; // rdi
  struct DXGALLOCATION *v24; // rsi
  DXGADAPTERALLOCATION *v25; // rcx
  struct DXGALLOCATION **v26; // [rsp+A0h] [rbp+28h]

  v8 = a2;
  v9 = 0;
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2910;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      2910LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a3 = 0LL;
  *a5 = 0LL;
  if ( a4 && (*((_DWORD *)a4 + 1) & 1) != 0 )
  {
    v12 = 1;
    v26 = *(struct DXGALLOCATION ***)(*((_QWORD *)a4 + 7) + 144LL);
  }
  else
  {
    v12 = 0;
    v26 = 0LL;
  }
  v13 = v8 - 1;
  if ( v8 - 1 >= 0 )
  {
    while ( 1 )
    {
      if ( (*((_BYTE *)this + 1901) & 1) != 0 )
      {
        v21 = (DXGALLOCATION *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(136LL, a2, (__int64)a3, (__int64)a4);
        v15 = (__int64)v21;
        if ( !v21 )
        {
LABEL_28:
          WdLogSingleEntry2(3LL, this, -1073741801LL);
          WdLogGlobalForLineNumber = 2936;
LABEL_29:
          v9 = -1073741801;
          goto LABEL_25;
        }
        DXGALLOCATION::DXGALLOCATION(v21, this);
        *(_DWORD *)(v15 + 72) |= 0x40000u;
        *(_DWORD *)(v15 + 96) = 0;
        *(_QWORD *)(v15 + 104) = 0LL;
        *(_QWORD *)(v15 + 120) = 0LL;
        *(_DWORD *)(v15 + 128) = 0;
      }
      else
      {
        Pool2 = ExAllocatePool2(257LL, 96LL, 1265072196LL, a4);
        v15 = Pool2;
        if ( !Pool2 )
          goto LABEL_28;
        *(_QWORD *)(Pool2 + 8) = this;
        *(_DWORD *)(Pool2 + 16) = 0;
        *(_QWORD *)(Pool2 + 24) = 0LL;
        *(_QWORD *)(Pool2 + 32) = 0LL;
        *(_QWORD *)(Pool2 + 40) = 0LL;
        *(_QWORD *)(Pool2 + 48) = 0LL;
        *(_QWORD *)(Pool2 + 56) = 0LL;
        *(_QWORD *)(Pool2 + 64) = 0LL;
        *(_DWORD *)(Pool2 + 72) = 0;
        *(_QWORD *)(Pool2 + 80) = 0LL;
        ExInitializeRundownProtection((PEX_RUNDOWN_REF)(Pool2 + 88));
      }
      DXGPROCESS::CreateAllocationHandleSafe(*((DXGPROCESS **)this + 5), (struct DXGALLOCATION *)v15);
      if ( !*(_DWORD *)(v15 + 16) )
      {
        WdLogSingleEntry2(3LL, this, -1073741801LL);
        WdLogGlobalForLineNumber = 2947;
        DXGALLOCATION::`scalar deleting destructor'((DXGALLOCATION *)v15);
        goto LABEL_29;
      }
      *(_QWORD *)(v15 + 40) = a4;
      if ( !*a5 )
        *a5 = (struct DXGALLOCATION *)v15;
      v16 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 184)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 168)) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8283;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"GetRenderCore()->IsCoreResourceSharedOwner()",
          8283LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_QWORD *)(v15 + 56) = 0LL;
      v17 = *a3;
      *(_QWORD *)(v15 + 64) = *a3;
      if ( v17 )
        *((_QWORD *)v17 + 7) = v15;
      *a3 = (struct DXGALLOCATION *)v15;
      if ( v12 )
      {
        v19 = (*(_DWORD *)(v15 + 72) & 0x40000) == 0;
        v18 = (DXGADAPTERALLOCATION_VGPU *)(v26 - 6);
        v26 = (struct DXGALLOCATION **)v26[1];
        *(_QWORD *)(v15 + 48) = v18;
        if ( !v19 )
          *(_DWORD *)(v15 + 120) = *((_DWORD *)v18 + 28);
        goto LABEL_25;
      }
      if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 209LL) )
      {
        v22 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x78uLL, 0x4B677844u, 256LL, (__int64)a4);
        if ( v22 )
        {
          v18 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v22);
          if ( v18 )
            goto LABEL_23;
        }
      }
      else
      {
        v18 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x40uLL, 0x4B677844u, 256LL, (__int64)a4);
        if ( v18 )
        {
          *((_DWORD *)v18 + 1) = 0;
          *((_QWORD *)v18 + 1) = 0LL;
          *((_QWORD *)v18 + 2) = 0LL;
          *((_QWORD *)v18 + 4) = 0LL;
          *((_DWORD *)v18 + 10) = 0;
          *((_QWORD *)v18 + 7) = 0LL;
          *((_QWORD *)v18 + 6) = 0LL;
LABEL_23:
          v19 = (*(_DWORD *)(v15 + 72) & 0x40000) == 0;
          *(_QWORD *)(v15 + 48) = v18;
          if ( !v19 )
            *(_DWORD *)(v15 + 120) = *((_DWORD *)v18 + 28);
          goto LABEL_25;
        }
      }
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 2987;
      v9 = -1073741801;
LABEL_25:
      if ( --v13 < 0 )
      {
        if ( v9 < 0 )
        {
          v23 = *a3;
          while ( v23 )
          {
            v24 = v23;
            v23 = (struct DXGALLOCATION *)*((_QWORD *)v23 + 8);
            ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(v18, v24, 0LL);
            v25 = (DXGADAPTERALLOCATION *)*((_QWORD *)v24 + 6);
            if ( v25 && (!a4 || (*((_DWORD *)a4 + 1) & 1) == 0) )
              DXGADAPTERALLOCATION::`scalar deleting destructor'(v25);
            DXGALLOCATION::`scalar deleting destructor'(v24);
          }
          *a3 = 0LL;
        }
        return (unsigned int)v9;
      }
    }
  }
  return (unsigned int)v9;
}
