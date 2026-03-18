/*
 * XREFs of ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z @ 0x14004A37C
 * Callers:
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x14004A5A0 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 * Callees:
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14000AC94 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x14004A4A4 (--1FlipManagerTokenInitInfo@@QEAA@XZ.c)
 *     ?CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x14004A4F8 (-CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerRetur.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FlipManagerCreateConsumerTokenOperation(
        void *a1,
        unsigned __int64 a2,
        struct FlipManagerTokenInitInfo *a3)
{
  int v5; // eax
  PVOID v6; // rdi
  NTSTATUS v7; // esi
  struct CFlipWaitedConsumerReturn *v8; // rbx
  __int64 v9; // xmm0_8
  struct CFlipWaitedConsumerReturn *v10; // rcx
  PVOID Object; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+28h] [rbp-38h] BYREF
  __int128 v14; // [rsp+38h] [rbp-28h]
  __int128 v15; // [rsp+48h] [rbp-18h]
  __int64 v16; // [rsp+58h] [rbp-8h]
  struct CFlipWaitedConsumerReturn *v17; // [rsp+98h] [rbp+38h] BYREF

  Object = 0LL;
  v17 = 0LL;
  v5 = FlipManagerObject::ResolveHandle(a1, 1u, (__int64)a3, (struct FlipManagerObject **)&Object);
  v6 = Object;
  v7 = v5;
  if ( v5 >= 0 )
  {
    v7 = FlipManagerObject::CreateWaitedConsumerReturnForConsumer((FlipManagerObject *)Object, a2, &v17);
    if ( v7 < 0 || (v7 = ObReferenceObjectByPointer(v6, 3u, g_pDxgkCompositionObjectType, 0), v7 < 0) )
    {
      v10 = v17;
    }
    else
    {
      *((_QWORD *)&v14 + 1) = 0LL;
      v15 = 0uLL;
      v16 = 0LL;
      v8 = v17;
      v13 = 0LL;
      LOBYTE(v14) = 0;
      *((_QWORD *)v17 + 1) = v6;
      *(_OWORD *)a3 = 0LL;
      *((_OWORD *)a3 + 1) = v14;
      v9 = v16;
      *((_OWORD *)a3 + 2) = 0uLL;
      *((_QWORD *)a3 + 6) = v9;
      FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo((FlipManagerTokenInitInfo *)&v13);
      *((_QWORD *)a3 + 1) = v6;
      v6 = 0LL;
      v10 = 0LL;
      *(_QWORD *)a3 = v8;
    }
    if ( v10 )
      (*(void (__fastcall **)(struct CFlipWaitedConsumerReturn *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)v7;
}
