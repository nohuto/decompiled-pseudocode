/*
 * XREFs of ?DeliverInput@InputRedirectionTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1801AFF10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x180032088 (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x1801B0268 (-IsValid@InputRedirectionTarget@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InputRedirectionTarget::DeliverInput(InputRedirectionTarget *this, struct InputInfo *a2)
{
  const char *v5; // r9
  const struct std::nothrow_t *v6; // rdx
  int v7; // [rsp+30h] [rbp-18h] BYREF
  void *v8; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 )
  {
    if ( InputRedirectionTarget::IsValid(this) )
    {
      if ( (*(_DWORD *)a2 & 0x100003B) != 0 )
      {
        *((_QWORD *)a2 + 8) = *((_QWORD *)this + 7);
      }
      else if ( *(_DWORD *)a2 == 0x4000 )
      {
        *((_QWORD *)a2 + 4) = *((_QWORD *)this + 7);
      }
      InputEventPayloadBuffer::InputEventPayloadBuffer((__int64)&v7, 5, (int *)a2, v5);
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, void *, int))(**((_QWORD **)this + 4) + 176LL))(
             *((_QWORD *)this + 4),
             *((_QWORD *)this + 5),
             4LL,
             v8,
             v7) < 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 168LL))(
          *((_QWORD *)this + 4),
          *((_QWORD *)this + 5));
        *((_QWORD *)this + 5) = 0LL;
      }
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v8, v6);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectiontarget.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
