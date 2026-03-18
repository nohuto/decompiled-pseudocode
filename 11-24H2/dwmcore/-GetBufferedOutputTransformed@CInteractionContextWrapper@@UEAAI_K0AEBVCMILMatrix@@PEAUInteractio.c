/*
 * XREFs of ?GetBufferedOutputTransformed@CInteractionContextWrapper@@UEAAI_K0AEBVCMILMatrix@@PEAUInteractionOutput@@@Z @ 0x18021F870
 * Callers:
 *     <none>
 * Callees:
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x1801256C8 (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionContextWrapper::GetBufferedOutputTransformed(
        CInteractionContextWrapper *this,
        __int64 a2,
        __int64 a3,
        const struct CMILMatrix *a4,
        struct InteractionOutput *a5)
{
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 (__fastcall *v11)(CInteractionContextWrapper *, __int64, __int64, _OWORD *); // rax
  unsigned int v12; // edi
  _OWORD v14[3]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v15; // [rsp+60h] [rbp-48h]
  int v16; // [rsp+68h] [rbp-40h]

  v7 = *(_OWORD *)a5;
  v8 = *((_OWORD *)a5 + 1);
  v16 = *((_DWORD *)a5 + 14);
  v9 = *(_QWORD *)this;
  v14[0] = v7;
  v10 = *((_OWORD *)a5 + 2);
  v11 = *(__int64 (__fastcall **)(CInteractionContextWrapper *, __int64, __int64, _OWORD *))(v9 + 112);
  v14[1] = v8;
  *(_QWORD *)&v8 = *((_QWORD *)a5 + 6);
  v14[2] = v10;
  v15 = v8;
  v12 = v11(this, a2, a3, v14);
  if ( v12 )
    CInteractionContextWrapper::TransformOutput(this, a4, (const struct InteractionOutput *)v14, a5);
  return v12;
}
