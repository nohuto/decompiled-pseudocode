/*
 * XREFs of ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x18053ACE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeExtendedViewRect@JointResize@@AEAA?AUtagRECT@@PEAUIApplicationView@@U2@@Z @ 0x180238FA0 (-ComputeExtendedViewRect@JointResize@@AEAA-AUtagRECT@@PEAUIApplicationView@@U2@@Z.c)
 *     ?CalculatePointFromRect@JointResize@@AEAA?AUtagPOINT@@UtagRECT@@@Z @ 0x180539724 (-CalculatePointFromRect@JointResize@@AEAA-AUtagPOINT@@UtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall JointResize::OnArrangedWindowSizeUpdated(JointResize *this, struct tagRECT *a2)
{
  LONG left; // ecx
  LONG v5; // edx
  LONG v6; // eax
  unsigned __int64 top; // rcx
  LONG v8; // eax
  __int64 (__fastcall ***v9)(ApplicationViewHelpers *, GUID *, __int64 *); // r8
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rcx
  _QWORD *v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  struct tagRECT v16; // [rsp+20h] [rbp-20h] BYREF
  struct tagRECT v17; // [rsp+30h] [rbp-10h] BYREF
  struct tagRECT v18; // [rsp+50h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 192) )
  {
    v16 = *a2;
    JointResize::CalculatePointFromRect((JointResize *)((char *)this - 88), &v18, &v16.left);
    left = v18.left;
    v5 = *((_DWORD *)this + 54);
    if ( v18.left < *((_DWORD *)this + 52) )
      left = *((_DWORD *)this + 52);
    v6 = *((_DWORD *)this + 53);
    if ( v5 >= left )
      v5 = left;
    top = (unsigned int)v18.top;
    v18.left = v5;
    if ( v18.top < v6 )
      top = (unsigned int)v6;
    v8 = *((_DWORD *)this + 55);
    if ( v8 >= (int)top )
      v8 = top;
    v18.top = v8;
    if ( v5 != *((_DWORD *)this + 56) || v8 != *((_DWORD *)this + 57) )
    {
      v9 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*((_QWORD *)this + 15);
      v16 = *a2;
      *((_QWORD *)this + 28) = *(_QWORD *)&v18.left;
      v16 = *JointResize::ComputeExtendedViewRect((JointResize *)top, &v17, v9, &v16);
      v10 = (_QWORD *)JointResize::CalculatePointFromRect((JointResize *)((char *)this - 88), &v18, &v16.left);
      v11 = *((_QWORD *)this + 13);
      if ( v11 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 48LL))(v11, *v10);
      if ( !*((_BYTE *)this + 368) )
      {
        v12 = (__int64 *)*((_QWORD *)this + 20);
        *((_BYTE *)this + 368) = 1;
        v13 = (_QWORD *)*((_QWORD *)this + 16);
        v14 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 17) - (_QWORD)v13) >> 5);
        v15 = *v12;
        if ( v14 == 1 )
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v15 + 40))(v12, *((_QWORD *)this + 15), *v13);
        else
          (*(void (__fastcall **)(__int64 *, _QWORD, unsigned __int64))(v15 + 32))(v12, *((_QWORD *)this + 15), v14);
      }
    }
  }
}
