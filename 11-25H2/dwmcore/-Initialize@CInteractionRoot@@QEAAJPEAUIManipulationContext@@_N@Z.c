/*
 * XREFs of ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1800FBB64
 * Callers:
 *     ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x1800FB438 (-Initialize@CManipulationContext@@QEAAJ_NK@Z.c)
 * Callees:
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800FBF74 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ??2CInteractionContextWrapper@@SAPEAX_K@Z @ 0x1800FC290 (--2CInteractionContextWrapper@@SAPEAX_K@Z.c)
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z @ 0x180132494 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenInteractionConfigurationPrimitive@@I@Z @ 0x18013323C (-AddMultipleAndSet@-$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenIn.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTouchInteractionConfigurationPrimitive@@I@Z @ 0x180133438 (-AddMultipleAndSet@-$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTou.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTouchpadInteractionConfigurationPrimitive@@I@Z @ 0x180133580 (-AddMultipleAndSet@-$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwm.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1801348B0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmMousewheelInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmMousewheelInteractionConfigurationPrimitive@@I@Z @ 0x18013499C (-AddMultipleAndSet@-$DynArray@UDwmMousewheelInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUD.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionRoot::Initialize(CInteractionRoot *this, struct IManipulationContext *a2, char a3)
{
  CInteractionContextWrapper *v4; // rax
  int v5; // esi
  CInteractionContextWrapper *v7; // rax
  struct IInteractionContextWrapper *v8; // r14
  unsigned __int64 v9; // rcx
  CInteractionContextWrapper *v10; // rax
  unsigned __int64 v11; // rcx
  CInteractionContextWrapper *v12; // rax
  struct IInteractionContextWrapper *v13; // rbx
  CInteractionContextWrapper *v14; // rax
  struct IInteractionContextWrapper *v15; // r15
  CInteractionContextWrapper *v16; // rax
  struct IInteractionContextWrapper *v17; // rdi
  int v18; // eax
  CInteractionContextWrapper *v19; // rcx
  struct IInteractionContextWrapper *v20; // rdi
  char *v21; // rdi
  CInteractionContextWrapper *v22; // rax
  struct IInteractionContextWrapper *v23; // r13
  unsigned __int64 v24; // rcx
  CInteractionContextWrapper *v25; // rax
  __int64 v26; // r8
  CInteractionContextWrapper *v28; // [rsp+38h] [rbp-28h]
  int v29; // [rsp+40h] [rbp-20h] BYREF
  int v30; // [rsp+44h] [rbp-1Ch]
  int v31; // [rsp+48h] [rbp-18h]

  *((_QWORD *)this + 172) = a2;
  v4 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new((unsigned __int64)this);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v7 = CInteractionContextWrapper::CInteractionContextWrapper(v4);
  if ( (v8 = v7) == 0LL )
    return (unsigned int)-2147024882;
  (**(void (__fastcall ***)(CInteractionContextWrapper *))v7)(v7);
  v10 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v9);
  if ( v10 )
  {
    v12 = CInteractionContextWrapper::CInteractionContextWrapper(v10);
    v13 = v12;
    if ( v12 )
      (**(void (__fastcall ***)(CInteractionContextWrapper *))v12)(v12);
  }
  else
  {
    v13 = 0LL;
  }
  v14 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v11);
  if ( v14 )
  {
    v22 = CInteractionContextWrapper::CInteractionContextWrapper(v14);
    v23 = v22;
    if ( v22 )
    {
      (**(void (__fastcall ***)(CInteractionContextWrapper *))v22)(v22);
      v25 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v24);
      if ( !v25 || (v16 = CInteractionContextWrapper::CInteractionContextWrapper(v25), v28 = v16, (v17 = v16) == 0LL) )
      {
        v5 = -2147024882;
        v15 = v8;
        v20 = v23;
        goto LABEL_16;
      }
      (**(void (__fastcall ***)(CInteractionContextWrapper *))v16)(v16);
      v18 = CInteractionProcessor::Initialize((CInteractionRoot *)((char *)this + 24), v8, v13, v23, v17, 1);
      v19 = v28;
      v5 = v18;
      v15 = v8;
      v20 = v23;
      if ( v18 >= 0 )
      {
        v30 = -1;
        v21 = (char *)this + 112;
        v31 = -805306369;
        v29 = 1;
        *((_DWORD *)this + 34) = 0;
        DynArrayImpl<0>::ShrinkToSize((char *)this + 112, 12LL);
        v5 = DynArray<DwmTouchInteractionConfigurationPrimitive,0>::AddMultipleAndSet((char *)this + 112, &v29, 1LL);
        if ( v5 < 0 )
          goto LABEL_13;
        v30 = -1;
        v21 = (char *)this + 272;
        v31 = -805306369;
        *((_BYTE *)this + 172) |= 1u;
        *((_DWORD *)this + 74) = 0;
        v29 = 1;
        DynArrayImpl<0>::ShrinkToSize((char *)this + 272, 12LL);
        v5 = DynArray<DwmTouchpadInteractionConfigurationPrimitive,0>::AddMultipleAndSet((char *)this + 272, &v29, 1LL);
        if ( v5 < 0 )
          goto LABEL_13;
        v30 = -1;
        v21 = (char *)this + 592;
        *((_BYTE *)this + 332) |= 1u;
        *((_DWORD *)this + 166) = -805306369;
        *((_DWORD *)this + 154) = 0;
        v29 = 1;
        v31 = -805306369;
        DynArrayImpl<0>::ShrinkToSize((char *)this + 592, 12LL);
        v5 = DynArray<DwmMousewheelInteractionConfigurationPrimitive,0>::AddMultipleAndSet(
               (char *)this + 592,
               &v29,
               1LL);
        if ( v5 < 0 )
          goto LABEL_13;
        v30 = -1;
        *((_BYTE *)this + 652) |= 1u;
        v21 = (char *)this + 432;
        *((_DWORD *)this + 114) = 0;
        v29 = 1;
        v31 = -805306369;
        DynArrayImpl<0>::ShrinkToSize((char *)this + 432, 12LL);
        v5 = DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet((char *)this + 432, &v29, 1LL);
        if ( v5 < 0 )
        {
LABEL_13:
          *((_DWORD *)v21 + 6) = 0;
          DynArrayImpl<0>::ShrinkToSize(v21, 12LL);
          v15 = v8;
          v20 = v23;
        }
        else
        {
          *((_BYTE *)this + 492) |= 1u;
          v15 = v8;
          LOBYTE(v26) = a3;
          v20 = v23;
          v19 = v28;
          if ( !a3 )
            goto LABEL_15;
          (*(void (__fastcall **)(CInteractionRoot *, _QWORD, __int64, __int64))(*(_QWORD *)this + 40LL))(
            this,
            0LL,
            v26,
            1LL);
        }
        v19 = v28;
      }
LABEL_15:
      (*(void (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)v19 + 8LL))(v19);
LABEL_16:
      (*(void (__fastcall **)(struct IInteractionContextWrapper *))(*(_QWORD *)v20 + 8LL))(v20);
      goto LABEL_17;
    }
  }
  v5 = -2147024882;
  v15 = v8;
LABEL_17:
  if ( v13 )
    (*(void (__fastcall **)(struct IInteractionContextWrapper *))(*(_QWORD *)v13 + 8LL))(v13);
  (*(void (__fastcall **)(struct IInteractionContextWrapper *))(*(_QWORD *)v15 + 8LL))(v15);
  return (unsigned int)v5;
}
