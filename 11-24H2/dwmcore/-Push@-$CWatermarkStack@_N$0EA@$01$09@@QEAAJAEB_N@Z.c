/*
 * XREFs of ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x18001D640
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18008F850 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18008FA94 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<bool,64,2,10>::Push(__int64 a1, _BYTE *a2)
{
  size_t v2; // rdi
  unsigned int v5; // eax
  unsigned __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int v10; // ebp
  HANDLE ProcessHeap; // rax
  void *v12; // rax
  void *v13; // r14
  void *v14; // rdi
  HANDLE v15; // rax
  int v16; // [rsp+20h] [rbp-8h]
  int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v2 == *(_DWORD *)(a1 + 12) )
  {
    v7 = 2LL * *(unsigned int *)(a1 + 12);
    if ( v7 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v7 <= 0x40 )
        LODWORD(v7) = 64;
      v10 = v7;
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v7 <= 1 )
      {
        v8 = -2147024809;
      }
      else
      {
        ProcessHeap = GetProcessHeap();
        v12 = HeapAlloc(ProcessHeap, 0, v10);
        v13 = v12;
        if ( v12 )
        {
          memcpy_0(v12, *(const void **)a1, v2);
          v14 = *(void **)a1;
          if ( *(_QWORD *)a1 )
          {
            v15 = GetProcessHeap();
            HeapFree(v15, 0, v14);
          }
          *(_QWORD *)a1 = v13;
          *(_DWORD *)(a1 + 12) = v10;
          goto LABEL_2;
        }
        v8 = -2147024882;
      }
      v9 = 104LL;
    }
    else
    {
      v8 = -2147024362;
      v9 = 98LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v8,
      v16);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v8,
      v17);
    return v8;
  }
LABEL_2:
  *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 8))++ + *(_QWORD *)a1) = *a2;
  v5 = *(_DWORD *)(a1 + 20);
  if ( v5 <= *(_DWORD *)(a1 + 8) )
    v5 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v5;
  return 0LL;
}
