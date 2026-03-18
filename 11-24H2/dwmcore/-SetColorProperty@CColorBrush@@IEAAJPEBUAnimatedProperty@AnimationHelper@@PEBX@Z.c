/*
 * XREFs of ?SetColorProperty@CColorBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801DCA58
 * Callers:
 *     _lambda_f1be29f81811cd9ed8679afdd5fb9086_::_lambda_invoker_cdecl_ @ 0x18020AC10 (_lambda_f1be29f81811cd9ed8679afdd5fb9086_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     memcmp_0 @ 0x1802DF6C8 (memcmp_0.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorBrush::SetColorProperty(
        CColorBrush *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  char *v4; // r14
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rsi
  struct _RTL_GENERIC_TABLE *v11; // rcx
  __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rdx
  void (__fastcall *v16)(__int64, unsigned int, __int64); // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  int Buffer; // [rsp+20h] [rbp-38h] BYREF
  __int128 v21; // [rsp+28h] [rbp-30h] BYREF
  __int64 v22; // [rsp+38h] [rbp-20h]
  int v23; // [rsp+40h] [rbp-18h]

  v4 = (char *)this + *((_QWORD *)a2 + 1);
  v7 = 0;
  if ( memcmp_0(v4, a3, *((_QWORD *)a2 + 2)) )
  {
    memcpy_0(v4, a3, *((_QWORD *)a2 + 2));
    v8 = *((_QWORD *)this + 3);
    v9 = *(_DWORD *)a2;
    v10 = *(_QWORD *)(v8 + 888);
    if ( v10 == *(_QWORD *)(v8 + 896) )
    {
      v19 = v10 + 1;
      v10 = 1LL;
      if ( v19 )
        v10 = v19;
    }
    v11 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
    v12 = 0LL;
    if ( v11 )
    {
      Buffer = v9;
      v22 = 0LL;
      v21 = 0LL;
      v23 = 0;
      v12 = (__int64)RtlLookupElementGenericTable(v11, &Buffer);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v21);
    }
    v13 = v12 + 8;
    v14 = -v12;
    v15 = v13 & -(__int64)(v14 != 0);
    if ( v15 )
    {
      if ( *(_DWORD *)((v13 & -(__int64)(v14 != 0)) + 0x18) )
      {
        do
        {
          v18 = v7++;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 8 * v18) + 232LL) = v10;
        }
        while ( v7 < *(_DWORD *)(v15 + 24) );
      }
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
      CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0, 8u);
    }
    v16 = *(void (__fastcall **)(__int64, unsigned int, __int64))(*(_QWORD *)this + 80LL);
    if ( v16 == CBrush::NotifyOnChanged )
      CBrush::NotifyOnChanged((__int64)this, 6u, (__int64)this);
    else
      v16((__int64)this, 6u, (__int64)this);
  }
  return 0LL;
}
