/*
 * XREFs of ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x1801A45E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x1801A43EC (-OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z.c)
 *     ?OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x1801A4730 (-OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801A5210 (-Reset@EdgyImpl@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnTouchInfo(EdgyProcessorTarget *this, struct TouchInfo *a2)
{
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0;
  if ( (a2->Flags & 0x400) != 0 )
  {
    *((_DWORD *)this + 6) = 1;
    *((_DWORD *)this + 18) = -1;
    *(_QWORD *)((char *)this + 76) = 0LL;
    *(_QWORD *)((char *)this + 84) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    v4 = *((_QWORD *)this + 14);
LABEL_22:
    EdgyImpl::Reset((EdgyImpl *)(v4 + 80));
    return 0LL;
  }
  if ( (a2->Flags & 1) != 0 && (unsigned int)(*((_DWORD *)this + 7) - 2) > 1 )
  {
    v5 = EdgyProcessorTarget::OnTouchSessionBegin((EdgyProcessorTarget *)((char *)this - 8), a2);
    if ( v5 < 0 )
    {
      v6 = 459LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  if ( !*((_DWORD *)this + 6) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct TouchInfo *))(**((_QWORD **)this + 18) + 32LL))(
           *((_QWORD *)this + 18),
           a2);
    if ( v5 < 0 )
    {
      v6 = 464LL;
      goto LABEL_7;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 18) + 64LL))(
           *((_QWORD *)this + 18),
           &v12);
    if ( v5 < 0 )
    {
      v6 = 465LL;
      goto LABEL_7;
    }
    v5 = EdgyProcessorTarget::OnGestureUpdate((EdgyProcessorTarget *)((char *)this - 8), v12, v8, v9);
    if ( v5 < 0 )
    {
      v6 = 467LL;
      goto LABEL_7;
    }
  }
  if ( (a2->Flags & 4) != 0 )
  {
    v10 = *((_DWORD *)this + 6);
    if ( !v10 || v10 == 3 )
    {
      *((_DWORD *)this + 6) = 1;
LABEL_21:
      *((_DWORD *)this + 18) = -1;
      *(_QWORD *)((char *)this + 76) = 0LL;
      *(_QWORD *)((char *)this + 84) = 0LL;
      *((_QWORD *)this + 12) = 0LL;
      v4 = *((_QWORD *)this + 14);
      goto LABEL_22;
    }
    if ( v10 == 1 )
      goto LABEL_21;
  }
  return 0LL;
}
