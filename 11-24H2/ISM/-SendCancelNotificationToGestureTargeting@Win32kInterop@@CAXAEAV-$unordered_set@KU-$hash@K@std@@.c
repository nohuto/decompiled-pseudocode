/*
 * XREFs of ?SendCancelNotificationToGestureTargeting@Win32kInterop@@CAXAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@@Z @ 0x1800F206C
 * Callers:
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAXH@Z @ 0x1800154D8 (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x18005B26C (--$count@X@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$a.c)
 *     ??0InputInteropMessageStorage@Win32kInterop@@QEAA@H@Z @ 0x18006DC60 (--0InputInteropMessageStorage@Win32kInterop@@QEAA@H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32kInterop::SendCancelNotificationToGestureTargeting(__int64 a1, __int64 a2)
{
  int v4; // edi
  _DWORD *v5; // rbx
  unsigned int v6; // r12d
  __int64 i; // rdi
  __int64 v8; // r8
  _OWORD *v9; // rdx
  _OWORD *v10; // rcx
  const struct std::nothrow_t *v11; // rdx
  int v12; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v13; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_DWORD *)(a1 + 16);
  Win32kInterop::InputInteropMessageStorage::InputInteropMessageStorage(
    (Win32kInterop::InputInteropMessageStorage *)&v13,
    240 * v4 + 168);
  v5 = v13;
  *v13 = 0;
  v5[39] = v4;
  *(_OWORD *)(v5 + 2) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(v5 + 6) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(v5 + 10) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(v5 + 14) = *(_OWORD *)(a2 + 136);
  *(_OWORD *)(v5 + 18) = *(_OWORD *)(a2 + 152);
  *(_OWORD *)(v5 + 22) = *(_OWORD *)(a2 + 168);
  *(_OWORD *)(v5 + 26) = *(_OWORD *)(a2 + 184);
  *(_OWORD *)(v5 + 30) = *(_OWORD *)(a2 + 200);
  *(_OWORD *)(v5 + 34) = *(_OWORD *)(a2 + 216);
  v6 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 316); i = (unsigned int)(i + 1) )
  {
    v12 = v5[60 * (unsigned int)i + 43];
    if ( std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
           (_QWORD *)a1,
           &v12) )
    {
      v8 = 60LL * v6;
      v9 = &v5[v8 + 42];
      v10 = (_OWORD *)(a2 + 144 * i + 320);
      *v9 = *v10;
      v9[1] = v10[1];
      v9[2] = v10[2];
      v9[3] = v10[3];
      v9[4] = v10[4];
      v9[5] = v10[5];
      v9[6] = v10[6];
      v9[7] = v10[7];
      v9[8] = v10[8];
      v5[v8 + 45] = 294912;
      v5[v8 + 100] = 1;
      ++v6;
    }
  }
  ((void (__fastcall *)(_DWORD *, _QWORD))Win32kInterop::s_pfnMTCallback)(v5, 0LL);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v13, v11);
}
