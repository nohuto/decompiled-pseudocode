/*
 * XREFs of MiProcessCrcList @ 0x1409E6C70
 * Callers:
 *     MiCombineWorkingSet @ 0x140686378 (MiCombineWorkingSet.c)
 *     MiCombineWorkingSetTail @ 0x140686560 (MiCombineWorkingSetTail.c)
 *     MiCombineAllPhysicalMemory @ 0x1409E6848 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiLocateCombineBlock @ 0x14020CD3C (MiLocateCombineBlock.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiValidCombineProtection @ 0x140346230 (MiValidCombineProtection.c)
 *     MiCompareActiveCrcEntries @ 0x140423220 (MiCompareActiveCrcEntries.c)
 *     MiCapturePfnVm @ 0x1404507C4 (MiCapturePfnVm.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiProcessCrcList(__int64 a1, void *a2, size_t a3, int a4)
{
  unsigned __int64 v5; // r13
  int v6; // edi
  __int64 v7; // r14
  struct _KTHREAD *CurrentThread; // rcx
  size_t v9; // r12
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  ULONG_PTR v12; // r14
  __int64 v13; // rbx
  unsigned __int64 v14; // r15
  unsigned int v15; // r12d
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 *v18; // rsi
  _QWORD *v19; // rax
  __int64 v20; // r8
  _QWORD *i; // rcx
  int v22; // r13d
  unsigned __int64 v23; // r14
  int v24; // ecx
  _QWORD *v25; // rbx
  __int64 Pool; // rax
  _QWORD *v27; // rdx
  bool v28; // r8
  _QWORD *v29; // rax
  size_t v30; // r12
  _QWORD *v31; // rdx
  _QWORD *v32; // rax
  _QWORD **v33; // rax
  _QWORD *v34; // rdx
  size_t v35; // r15
  __int64 v36; // rdi
  __int64 *v37; // r14
  __int64 v38; // rbx
  __int64 v39; // rdx
  void *v40; // rcx
  _QWORD *v41; // rbx
  _QWORD *v42; // rax
  size_t v43; // r14
  size_t j; // rdx
  _QWORD *v45; // r8
  PVOID P; // [rsp+38h] [rbp-39h] BYREF
  size_t v47; // [rsp+40h] [rbp-31h]
  __int64 v48; // [rsp+48h] [rbp-29h]
  __int64 v49; // [rsp+58h] [rbp-19h]
  struct _KTHREAD *v50; // [rsp+60h] [rbp-11h]
  PVOID Object[2]; // [rsp+68h] [rbp-9h] BYREF
  __int128 v52; // [rsp+78h] [rbp+7h]
  int v55; // [rsp+E8h] [rbp+77h]

  if ( a3 )
  {
    P = 0LL;
    v55 = *(_DWORD *)(a1 + 140);
    v5 = (unsigned __int64)a2;
    v6 = a4;
    v7 = *(_QWORD *)(a1 + 8);
    v48 = *(_QWORD *)a1;
    v49 = v7;
    *(_OWORD *)Object = 0LL;
    v52 = 0LL;
    qsort(a2, a3, 0x28uLL, (int (__cdecl *)(const void *, const void *))MiCombinePageSortByHash);
    CurrentThread = KeGetCurrentThread();
    v50 = CurrentThread;
    v9 = 0LL;
    v47 = 0LL;
    if ( v5 <= v5 + 40 * (a3 - 1) )
    {
      v10 = v5 + 8;
      v11 = v5 + 40 * (a3 - 1);
LABEL_4:
      if ( v7 && *(_DWORD *)(v7 + 4) || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
        goto LABEL_16;
      v12 = 48LL * *(_QWORD *)(v10 + 8) - 0x220000000000LL;
      v13 = *(_QWORD *)(v12 + 16) >> 5;
      v14 = *(_QWORD *)(v12 + 8) | 0x8000000000000000uLL;
      v15 = v13 & 0x1F;
      if ( !MiValidCombineProtection(v15) || v14 < v17 || v14 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        *(_QWORD *)v10 = 0LL;
        v9 = v47;
        goto LABEL_15;
      }
      if ( (v10 - 8 == v11 || *(_QWORD *)v10 != *(_QWORD *)(v10 + 40)) && (v10 - 8 == v5 || *(_QWORD *)v10 != v16) )
      {
        if ( !MiLocateCombineBlock(v48, *(_QWORD *)v10, v15, 0, 0LL) )
        {
          *(_QWORD *)v10 = 0LL;
          v9 = v47;
          goto LABEL_15;
        }
        v22 = 2;
      }
      else
      {
        v22 = 1;
        if ( (HIWORD(*(_DWORD *)(v12 + 32)) & 0xC0) == 0xC0 )
        {
          *(_QWORD *)v10 = 0LL;
          v9 = v47;
          goto LABEL_42;
        }
      }
      v23 = MiCapturePfnVm(a1, v12, v55, *(_QWORD *)v10, (__int64)Object);
      if ( !v23 || Object[1] != (PVOID)v14 || (_DWORD)v52 != v15 )
        goto LABEL_46;
      v24 = *(_DWORD *)(v10 + 24);
      *(_QWORD *)(v10 + 16) = *((_QWORD *)&v52 + 1);
      *(_DWORD *)(v10 + 24) = (v24 ^ ((unsigned __int8)v24 ^ (unsigned __int8)v13) & 0x1F) & 0xFFFFFFDF;
      v25 = P;
      while ( v25 )
      {
        if ( v23 > v25[4] )
        {
          v25 = (_QWORD *)v25[1];
        }
        else
        {
          if ( v23 >= v25[4] )
            break;
          v25 = (_QWORD *)*v25;
        }
      }
      if ( v25 )
      {
        if ( Object[0] )
          ObfDereferenceObjectWithTag(Object[0], 0x62436D4Du);
        goto LABEL_40;
      }
      Pool = MiAllocatePool(0x40uLL, 0x38uLL, 1834379597);
      v25 = (_QWORD *)Pool;
      if ( !Pool )
      {
LABEL_46:
        if ( Object[0] )
          ObfDereferenceObjectWithTag(Object[0], 0x62436D4Du);
        *(_QWORD *)v10 = 0LL;
        v9 = v47;
        goto LABEL_42;
      }
      v27 = P;
      v28 = 0;
      *(_QWORD *)(Pool + 32) = v23;
      *(PVOID *)(Pool + 40) = Object[0];
      if ( !v27 )
        goto LABEL_39;
      while ( 1 )
      {
        if ( v23 >= (unsigned __int64)(v27 + 4) )
        {
          v29 = (_QWORD *)v27[1];
          if ( !v29 )
          {
            v28 = 1;
LABEL_39:
            RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v27, v28, v25);
LABEL_40:
            v30 = v47;
            *(_QWORD *)(v10 - 8) = v25[6];
            v9 = v30 + 1;
            ++v25[3];
            v25[6] = v10 - 8;
            v47 = v9;
            *(_QWORD *)(v10 + 8) = (__int64)(v14 << 25) >> 16;
            if ( v22 == 2 )
              *(_DWORD *)(v10 + 24) |= 0x20u;
LABEL_42:
            v5 = (unsigned __int64)a2;
LABEL_15:
            v10 += 40LL;
            v7 = v49;
            CurrentThread = v50;
            if ( v10 - 8 > v11 )
            {
LABEL_16:
              v6 = a4;
              break;
            }
            goto LABEL_4;
          }
        }
        else
        {
          v29 = (_QWORD *)*v27;
          if ( !*v27 )
            goto LABEL_39;
        }
        v27 = v29;
      }
    }
    v18 = 0LL;
    if ( v9 )
    {
      v18 = (__int64 *)MiAllocatePool(0x100uLL, 8 * v9, 1834379597);
      if ( v18 )
      {
        v19 = P;
        v20 = 0LL;
        i = 0LL;
        while ( v19 )
        {
          i = v19;
          v19 = (_QWORD *)*v19;
        }
        while ( i )
        {
          v32 = (_QWORD *)i[6];
          while ( v32 )
          {
            if ( v32[1] )
              v18[v20] = (__int64)v32;
            v32 = (_QWORD *)*v32;
            ++v20;
          }
          v33 = (_QWORD **)i[1];
          v31 = i;
          if ( v33 )
          {
            v34 = *v33;
            for ( i = (_QWORD *)i[1]; v34; v34 = (_QWORD *)*v34 )
              i = v34;
          }
          else
          {
            while ( 1 )
            {
              i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !i || (_QWORD *)*i == v31 )
                break;
              v31 = i;
            }
          }
        }
        qsort(v18, v9, 8uLL, (int (__cdecl *)(const void *, const void *))MiCombineActiveCrcSortByHash);
        v35 = 0LL;
        v36 = v48;
        v37 = v18 + 1;
        while ( 1 )
        {
          v38 = *(v37 - 1);
          if ( (*(_DWORD *)(v38 + 32) & 0x20) == 0 )
            break;
          if ( !MiLocateCombineBlock(v36, *(_QWORD *)(v38 + 8), *(_DWORD *)(v38 + 32) & 0x1F, 0, (_QWORD *)(v38 + 24)) )
            goto LABEL_78;
LABEL_71:
          ++v35;
          ++v37;
          if ( v35 >= v9 )
          {
            v6 = a4;
            goto LABEL_84;
          }
        }
        if ( v35 )
        {
          v39 = *(v37 - 2);
          if ( *(_QWORD *)(v39 + 16) != -1LL && !(unsigned int)MiCompareActiveCrcEntries(*(v37 - 1), v39) )
            goto LABEL_71;
        }
        if ( v35 != v9 - 1 && *(_QWORD *)(*v37 + 16) != -1LL && !(unsigned int)MiCompareActiveCrcEntries(v38, *v37) )
          goto LABEL_71;
LABEL_78:
        *(_QWORD *)(v38 + 16) = -1LL;
        goto LABEL_71;
      }
    }
LABEL_84:
    while ( P )
    {
      v41 = P;
      RtlAvlRemoveNode((unsigned __int64 *)&P, (__int64)P);
      if ( v18 )
      {
        v42 = (_QWORD *)v41[6];
        v43 = 0LL;
        while ( v42 )
        {
          if ( v42[2] == -1LL )
            --v41[3];
          else
            v18[v43++] = (__int64)v42;
          v42 = (_QWORD *)*v42;
        }
        qsort(v18, v43, 8uLL, (int (__cdecl *)(const void *, const void *))MiCombineActiveCrcSortByVa);
        v41[6] = 0LL;
        for ( j = 0LL; j < v43; ++j )
        {
          v45 = (_QWORD *)v18[j];
          if ( j && v45[2] == *(_QWORD *)(v18[j - 1] + 16) )
          {
            --v41[3];
          }
          else
          {
            *v45 = v41[6];
            v41[6] = v45;
          }
        }
        if ( v41[3] )
        {
          *(_QWORD *)(a1 + 112) = v41[4];
          MiSharePages(a1, v41, v6);
        }
      }
      v40 = (void *)v41[5];
      if ( v40 )
        ObfDereferenceObjectWithTag(v40, 0x62436D4Du);
      ExFreePoolWithTag(v41, 0);
    }
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
  }
}
