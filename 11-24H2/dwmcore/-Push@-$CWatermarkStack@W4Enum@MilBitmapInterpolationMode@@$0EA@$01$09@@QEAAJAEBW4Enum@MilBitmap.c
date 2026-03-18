/*
 * XREFs of ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1801C8E50
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18008F850 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18008FA94 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned int v11; // ebx
  HANDLE ProcessHeap; // rax
  void *v13; // rax
  void *v14; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 12);
  if ( v4 == v5 )
  {
    v6 = 2LL * v5;
    if ( v6 > 0xFFFFFFFF )
    {
      v8 = 98LL;
      goto LABEL_12;
    }
    if ( (unsigned int)v6 <= 0x40 )
      v6 = 64LL;
    v7 = 4LL * v4;
    if ( v7 > 0xFFFFFFFF )
    {
      v8 = 101LL;
LABEL_12:
      v11 = -2147024362;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)v11);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)v11);
      return v11;
    }
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v6 <= 4 )
    {
      v11 = -2147024809;
      goto LABEL_17;
    }
    ProcessHeap = GetProcessHeap();
    v13 = HeapAlloc(ProcessHeap, 0, 4 * v6);
    v14 = v13;
    if ( !v13 )
    {
      v11 = -2147024882;
LABEL_17:
      v8 = 104LL;
      goto LABEL_13;
    }
    memcpy_0(v13, *(const void **)a1, (unsigned int)v7);
    operator delete(*(void **)a1);
    *(_QWORD *)a1 = v14;
    *(_DWORD *)(a1 + 12) = v6;
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = *a2;
  v9 = *(_DWORD *)(a1 + 20);
  if ( v9 <= *(_DWORD *)(a1 + 8) )
    v9 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v9;
  return 0LL;
}
