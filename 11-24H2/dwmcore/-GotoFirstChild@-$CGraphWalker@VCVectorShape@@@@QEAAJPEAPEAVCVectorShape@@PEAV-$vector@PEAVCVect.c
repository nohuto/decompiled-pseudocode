/*
 * XREFs of ?GotoFirstChild@?$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@@Z @ 0x180135830
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x180135248 (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGraphWalker<CVectorShape>::GotoFirstChild(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rcx
  __int64 (*v5)(void); // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // edx
  _QWORD *v11; // r8
  struct CVectorShape *(__fastcall *v12)(CContainerVectorShape *, unsigned int); // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax
  unsigned int v16; // ebp
  __int64 v17; // rdx
  unsigned int v18; // ebx
  unsigned int v19; // r15d
  HANDLE ProcessHeap; // rax
  void *v21; // rax
  void *v22; // r14
  void *v23; // r15
  HANDLE v24; // rax
  __int128 v25; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = *(_QWORD **)(a1 + 8);
  *a2 = 0LL;
  v5 = *(__int64 (**)(void))(*v3 + 312LL);
  if ( (char *)v5 == (char *)CContainerVectorShape::GetChildrenCount )
    v6 = (__int64)(v3[14] - v3[13]) >> 3;
  else
    LODWORD(v6) = v5();
  if ( !(_DWORD)v6 )
    return 1LL;
  v7 = *(unsigned int *)(a1 + 40);
  *(_QWORD *)&v25 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v25 + 1) = *(unsigned int *)(a1 + 24);
  v8 = *(unsigned int *)(a1 + 44);
  if ( (_DWORD)v7 == (_DWORD)v8 )
  {
    v16 = 2 * v8;
    if ( (unsigned __int64)(2 * v8) <= 0xFFFFFFFF )
    {
      if ( v16 <= 0x40 )
        v16 = 64;
      v19 = 16 * v7;
      if ( (unsigned __int64)(16 * v7) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v16 <= 0x10 )
        {
          v18 = -2147024809;
        }
        else
        {
          ProcessHeap = GetProcessHeap();
          v21 = HeapAlloc(ProcessHeap, 0, 16LL * v16);
          v22 = v21;
          if ( v21 )
          {
            memcpy_0(v21, *(const void **)(a1 + 32), v19);
            v23 = *(void **)(a1 + 32);
            if ( v23 )
            {
              v24 = GetProcessHeap();
              HeapFree(v24, 0, v23);
            }
            *(_QWORD *)(a1 + 32) = v22;
            *(_DWORD *)(a1 + 44) = v16;
            goto LABEL_5;
          }
          v18 = -2147024882;
        }
        v17 = 104LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v18);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v18);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x87u, 0LL);
        return v18;
      }
      v17 = 101LL;
    }
    else
    {
      v17 = 98LL;
    }
    v18 = -2147024362;
    goto LABEL_15;
  }
LABEL_5:
  *(_OWORD *)(*(_QWORD *)(a1 + 32) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 40))++) = v25;
  v9 = *(_DWORD *)(a1 + 52);
  if ( v9 <= *(_DWORD *)(a1 + 40) )
    v9 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 52) = v9;
  if ( *(_DWORD *)(a1 + 28) == 1 )
    v10 = 0;
  else
    v10 = v6 - 1;
  *(_DWORD *)(a1 + 24) = v10;
  v11 = *(_QWORD **)(a1 + 8);
  v12 = *(struct CVectorShape *(__fastcall **)(CContainerVectorShape *, unsigned int))(*v11 + 320LL);
  if ( v12 == CContainerVectorShape::GetChildAt )
    v13 = *(_QWORD *)(v11[13] + 8LL * v10);
  else
    v13 = ((__int64 (__fastcall *)(_QWORD))v12)(*(_QWORD *)(a1 + 8));
  v14 = *(_QWORD *)(a1 + 8);
  ++*(_DWORD *)(a1 + 4);
  *(_QWORD *)(a1 + 8) = v13;
  *a2 = v13;
  result = 0LL;
  *(_QWORD *)(a1 + 16) = v14;
  return result;
}
