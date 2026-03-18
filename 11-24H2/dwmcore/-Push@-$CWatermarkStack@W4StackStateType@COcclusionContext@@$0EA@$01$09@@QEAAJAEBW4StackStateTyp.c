/*
 * XREFs of ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x18001DB70
 * Callers:
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x1801A9A4C (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?PushClipInternal@COcclusionContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@AEBVCMILMatrix@@@Z @ 0x180234810 (-PushClipInternal@COcclusionContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rsi
  unsigned int v11; // ebp
  HANDLE ProcessHeap; // rax
  void *v13; // rax
  void *v14; // rdi
  int v15; // [rsp+20h] [rbp-8h]
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(unsigned int *)(a1 + 12);
  if ( (_DWORD)v4 == (_DWORD)v5 )
  {
    v10 = 2 * v5;
    if ( (unsigned __int64)(2 * v5) > 0xFFFFFFFF )
    {
      v8 = 98LL;
    }
    else
    {
      if ( (unsigned int)v10 <= 0x40 )
        v10 = 64LL;
      v11 = 4 * v4;
      if ( (unsigned __int64)(4 * v4) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v10 <= 4 )
        {
          v9 = -2147024809;
        }
        else
        {
          ProcessHeap = GetProcessHeap();
          v13 = HeapAlloc(ProcessHeap, 0, 4 * v10);
          v14 = v13;
          if ( v13 )
          {
            memcpy_0(v13, *(const void **)a1, v11);
            operator delete(*(void **)a1);
            *(_QWORD *)a1 = v14;
            *(_DWORD *)(a1 + 12) = v10;
            goto LABEL_2;
          }
          v9 = -2147024882;
        }
        v8 = 104LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v9,
          v15);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v9,
          v16);
        return v9;
      }
      v8 = 101LL;
    }
    v9 = -2147024362;
    goto LABEL_7;
  }
LABEL_2:
  *(_DWORD *)(*(_QWORD *)a1 + 4LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = *a2;
  v6 = *(_DWORD *)(a1 + 20);
  if ( v6 <= *(_DWORD *)(a1 + 8) )
    v6 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v6;
  return 0LL;
}
