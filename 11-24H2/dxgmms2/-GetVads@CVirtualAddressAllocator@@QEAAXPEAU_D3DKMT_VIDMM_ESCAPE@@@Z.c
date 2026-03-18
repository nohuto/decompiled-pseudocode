/*
 * XREFs of ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x14009A5D8
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z @ 0x140093560 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x140056340 (memset.c)
 */

void __fastcall CVirtualAddressAllocator::GetVads(struct _KTHREAD **this, struct _D3DKMT_VIDMM_ESCAPE *a2)
{
  D3DKMT_VAD_ESCAPE_COMMAND Command; // edx
  int v5; // edi
  __int32 v6; // edx
  __int32 v7; // edx
  struct _KTHREAD *v8; // rax
  struct _D3DKMT_VIDMM_ESCAPE *v9; // r15
  __int64 Value; // rcx
  __int64 v11; // r13
  _DWORD *v12; // r12
  UINT64 *p_IndexShift; // r14
  UINT NumPtes; // eax
  unsigned int *v15; // r9
  __int64 v16; // rcx
  struct _KTHREAD *v17; // rax
  int v18; // esi
  __int64 v19; // rbp
  unsigned int i; // edx
  __int64 v21; // r8
  __int64 v22; // rcx
  unsigned int v23; // r11d
  unsigned int v24; // r10d
  __int64 v25; // rdx
  UINT v26; // edx
  UINT j; // r8d
  __int64 v28; // rax
  UINT v29; // r9d
  unsigned int v30; // r11d
  _OWORD *v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int64 **v34; // rsi
  __int64 *k; // r8
  UINT64 NtHandle; // rax
  __int64 PhysicalAdapterIndex; // rcx
  int v38; // r9d
  _QWORD *v39; // rax
  _QWORD *m; // rdx
  _QWORD **v41; // rax
  _QWORD *v42; // rcx
  _QWORD *v43; // rcx
  _QWORD *v44; // rdx
  __int64 **v45; // rsi
  __int64 *n; // rcx
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 v47; // eax
  UINT64 *v48; // rax
  UINT64 *v49; // rdx
  HANDLE hProcess; // r8
  _QWORD **v51; // rsi
  _QWORD *ii; // rcx
  _BYTE v53[32]; // [rsp+20h] [rbp-48h] BYREF
  UINT v54; // [rsp+70h] [rbp+8h]

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v53, this + 7);
  Command = a2->GetVads.Command;
  v5 = 0;
  a2->GetVads.Status = 0;
  if ( Command )
  {
    v6 = Command - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          v8 = this[11];
          v9 = a2 + 1;
          Value = a2->SetFault.Value;
          if ( (unsigned int)Value < *((_DWORD *)v8 + 1736) )
          {
            if ( a2->GetVads.GetPte.NumPtes <= 0x40 )
            {
              v11 = *(_QWORD *)(*((_QWORD *)v8 + 5029) + 8 * Value);
              v12 = *(_DWORD **)(v11 + 480);
              if ( a2->Evict.AllocationHandle < v12[4] )
              {
                p_IndexShift = &a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[0].IndexShift;
                memset(&a2->Defrag + 1, 0, 0x400uLL);
                NumPtes = a2->GetVads.GetPte.NumPtes;
                v15 = 0LL;
                v16 = a2->SetFault.Value;
                a2->GetVads.GetPte.NumPtes = 0;
                v16 *= 32LL;
                v54 = NumPtes;
                v17 = this[15];
                v18 = v12[4];
                v19 = *(_QWORD *)((char *)v17 + v16);
                for ( i = *(_DWORD *)((char *)v17 + v16 + 16);
                      v18;
                      i = *(_DWORD *)(v11 + 48LL * (unsigned int)(v21 - 1) + 128) )
                {
                  v21 = (unsigned int)--v18;
                  if ( !v19 || !(_DWORD)v21 && !v15 )
                    break;
                  v22 = *(&a2->GetVads.GetVadRange.VaRangeIndex + v21);
                  v23 = *(&a2->GetVads.GetVadRange.VaRangeIndex + v21);
                  if ( !(_DWORD)v21 && (*v15 & 0x40) != 0 )
                    v23 >>= 4;
                  if ( v23 >= i )
                  {
                    WdLogSingleEntry0(3LL);
                    WdLogGlobalForLineNumber = 2790;
                    break;
                  }
                  v24 = 0;
                  if ( (_DWORD)v21 == 1 && (*v12 & 0x80u) != 0 && a2->GetVads.GetPte.b64KBPte )
                    v24 = i;
                  if ( (_DWORD)v21 == a2->Evict.AllocationHandle )
                  {
                    v26 = i - v23;
                    if ( v26 >= v54 )
                      v26 = v54;
                    if ( (_DWORD)v21 )
                    {
                      v29 = 0;
                      if ( v26 )
                      {
                        v30 = v24 + v23;
                        do
                        {
                          v31 = (_OWORD *)(*(_QWORD *)(v19 + 40) + 16LL * (v30 + v29));
                          *(_OWORD *)p_IndexShift = *v31;
                          if ( (_DWORD)v21 == 1 )
                          {
                            if ( (*v12 & 0x80u) != 0 )
                            {
                              v33 = -(__int64)(v24 != 0) & 0x80000;
                            }
                            else
                            {
                              v32 = *(_DWORD *)v31;
                              v33 = 0LL;
                              if ( (v32 & 0x60000) == 0x20000LL )
                                v33 = 0x80000LL;
                            }
                            *p_IndexShift = *p_IndexShift & 0xFFFFFFFFFFF7FFFFuLL | v33;
                          }
                          ++v29;
                          p_IndexShift += 2;
                        }
                        while ( v29 < v26 );
                      }
                      a2->GetVads.GetPte.NumValidEntries = *(_DWORD *)(v19 + 4);
                    }
                    else
                    {
                      for ( j = 0; j < v26; v9 = (struct _D3DKMT_VIDMM_ESCAPE *)((char *)v9 + 8) )
                      {
                        *(_OWORD *)p_IndexShift = *(_OWORD *)(*((_QWORD *)v15 + 4) + 16LL * (j + v23));
                        *p_IndexShift = ((unsigned __int64)*v15 << 13) ^ (*p_IndexShift ^ ((unsigned __int64)*v15 << 13)) & 0xFFFFFFFFFFF7FFFFuLL;
                        v28 = *((_QWORD *)v15 + 5);
                        if ( v28 )
                        {
                          *(_QWORD *)&v9->Type = *(_QWORD *)(v28 + 16LL * (j + v23));
                          v9->GetVads.GetPte.Pte[29].Flags = *(_QWORD *)(*((_QWORD *)v15 + 5) + 16LL * (j + v23) + 8);
                        }
                        ++j;
                        p_IndexShift += 2;
                      }
                      a2->GetVads.GetPte.NumValidEntries = v15[1];
                      a2->GetVads.GetPte.b64KBPte = (*v15 & 0x40) != 0;
                    }
                    a2->GetVads.GetPte.NumPtes = v26;
                    break;
                  }
                  v25 = *(_QWORD *)(v19 + 48);
                  if ( (_DWORD)v21 == 1 )
                    v15 = *(unsigned int **)(v25 + 8LL * ((unsigned int)v22 + v24));
                  else
                    v19 = *(_QWORD *)(v25 + 8 * v22);
                }
              }
              else
              {
                a2->GetVads.Status = -1073741811;
                WdLogSingleEntry0(3LL);
                WdLogGlobalForLineNumber = 2763;
              }
            }
            else
            {
              a2->GetVads.Status = -1073741811;
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 2755;
            }
          }
          else
          {
            a2->GetVads.Status = -1073741811;
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 2749;
          }
        }
      }
      else
      {
        v34 = (__int64 **)(this + 3);
        for ( k = *v34; k != (__int64 *)v34; k = (__int64 *)*k )
        {
          NtHandle = a2->EvictByNtHandle.NtHandle;
          if ( NtHandle >= *(k - 2) && NtHandle < *(k - 1) )
          {
            PhysicalAdapterIndex = a2->GetVads.GetVadRange.PhysicalAdapterIndex;
            if ( (unsigned int)PhysicalAdapterIndex < ((*((_DWORD *)k + 8) >> 4) & 0x7Fu) )
            {
              v38 = 0;
              v39 = (_QWORD *)k[3 * PhysicalAdapterIndex + 7];
              m = 0LL;
              while ( v39 )
              {
                m = v39;
                v39 = (_QWORD *)*v39;
              }
              while ( m )
              {
                if ( v38 == a2->GetVads.GetVadRange.VaRangeIndex )
                {
                  v44 = m - 1;
                  if ( v44 )
                  {
                    a2->GetVads.GetVadRange.StartAddress = v44[13];
                    a2->GetVads.GetVad.StartAddress = v44[14];
                    a2->GetVads.GetVadRange.OwnerType = v44[9] & 0xF;
                    a2->GetVads.GetVadRange.pOwner = v44[8];
                    a2->GetVads.GetVadRange.Protection = *((_DWORD *)v44 + 24);
                    a2->GetVads.GetVad.EndAddress = v44[11];
                    a2->GetVads.GetVadRange.OwnerOffset = v44[10];
                    goto LABEL_86;
                  }
                  break;
                }
                v41 = (_QWORD **)m[1];
                ++v38;
                v42 = m;
                if ( v41 )
                {
                  v43 = *v41;
                  for ( m = (_QWORD *)m[1]; v43; v43 = (_QWORD *)*v43 )
                    m = v43;
                }
                else
                {
                  while ( 1 )
                  {
                    m = (_QWORD *)(m[2] & 0xFFFFFFFFFFFFFFFCuLL);
                    if ( !m || (_QWORD *)*m == v42 )
                      break;
                    v42 = m;
                  }
                }
              }
              a2->GetVads.Status = -1073741811;
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 2735;
            }
            else
            {
              a2->GetVads.Status = -1073741811;
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 2702;
            }
            break;
          }
        }
      }
    }
    else
    {
      v45 = (__int64 **)(this + 3);
      for ( n = *v45; n != (__int64 *)v45; n = (__int64 *)*n )
      {
        v47 = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a2->SetFault.Value;
        ++v5;
        if ( v47 == -1 )
        {
          hProcess = a2->Evict.hProcess;
          v48 = (UINT64 *)(n - 2);
          if ( (unsigned __int64)hProcess >= *(n - 2) )
          {
            v49 = (UINT64 *)(n - 1);
            if ( (unsigned __int64)hProcess < *(n - 1) )
              goto LABEL_78;
          }
        }
        else if ( v47 == v5 )
        {
          v48 = (UINT64 *)(n - 2);
          v49 = (UINT64 *)(n - 1);
LABEL_78:
          a2->GetVads.GetVad.StartAddress = *v48;
          a2->GetVads.GetVad.EndAddress = *v49;
          a2->GetVads.GetVad.VadType = n[4] & 0xF;
          a2->GetVads.GetVad.NumMappedRanges = *((_DWORD *)n + 9);
          goto LABEL_86;
        }
      }
      a2->GetVads.Status = -1073741811;
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2685;
    }
  }
  else
  {
    v51 = (_QWORD **)(this + 3);
    a2->SetFault.Value = 0;
    for ( ii = *v51; ii != v51; ii = (_QWORD *)*ii )
      a2->SetFault.Value = ++v5;
  }
LABEL_86:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v53);
}
