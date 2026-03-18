/*
 * XREFs of ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x18001DCC0
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18008F850 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18008FA94 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned int v8; // ebx
  void *v10; // rbp
  unsigned int v11; // eax
  unsigned int v12; // ebp
  HANDLE ProcessHeap; // rax
  void *v14; // rax
  void *v15; // rdi
  HANDLE v16; // rax
  int v17; // [rsp+20h] [rbp-8h]
  int v18; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 12);
  if ( (_DWORD)v4 == v5 )
  {
    v6 = 2LL * v5;
    if ( v6 > 0xFFFFFFFF )
    {
      v7 = 98LL;
LABEL_4:
      v8 = -2147024362;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)v8,
        v17);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)v8,
        v18);
      return v8;
    }
    if ( (unsigned int)v6 <= 0x40 )
      v6 = 64LL;
    v12 = 4 * v4;
    if ( (unsigned __int64)(4 * v4) > 0xFFFFFFFF )
    {
      v7 = 101LL;
      goto LABEL_4;
    }
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v6 <= 4 )
    {
      v8 = -2147024809;
      goto LABEL_19;
    }
    ProcessHeap = GetProcessHeap();
    v14 = HeapAlloc(ProcessHeap, 0, 4 * v6);
    v15 = v14;
    if ( !v14 )
    {
      v8 = -2147024882;
LABEL_19:
      v7 = 104LL;
      goto LABEL_5;
    }
    memcpy_0(v14, *(const void **)a1, v12);
    v10 = *(void **)a1;
    if ( *(_QWORD *)a1 )
    {
      v16 = GetProcessHeap();
      HeapFree(v16, 0, v10);
    }
    *(_QWORD *)a1 = v15;
    *(_DWORD *)(a1 + 12) = v6;
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = *a2;
  v11 = *(_DWORD *)(a1 + 20);
  if ( v11 <= *(_DWORD *)(a1 + 8) )
    v11 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v11;
  return 0LL;
}
