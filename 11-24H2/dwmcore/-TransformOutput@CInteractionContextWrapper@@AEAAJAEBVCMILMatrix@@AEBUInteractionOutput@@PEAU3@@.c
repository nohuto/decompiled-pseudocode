/*
 * XREFs of ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x1801256C8
 * Callers:
 *     ?GetTransformedOutput@CInteractionContextWrapper@@UEAAJAEBVCMILMatrix@@PEAUInteractionOutput@@@Z @ 0x180124F60 (-GetTransformedOutput@CInteractionContextWrapper@@UEAAJAEBVCMILMatrix@@PEAUInteractionOutput@@@Z.c)
 *     ?GetBufferedOutputTransformed@CInteractionContextWrapper@@UEAAI_K0AEBVCMILMatrix@@PEAUInteractionOutput@@@Z @ 0x18021F870 (-GetBufferedOutputTransformed@CInteractionContextWrapper@@UEAAI_K0AEBVCMILMatrix@@PEAUInteractio.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z @ 0x180065E2C (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z.c)
 *     ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1K_NPEAU2@@Z @ 0x1801254A4 (-TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1K.c)
 *     ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x180125DD8 (-Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z.c)
 */

__int64 __fastcall CInteractionContextWrapper::TransformOutput(
        CInteractionContextWrapper *this,
        const struct CMILMatrix *a2,
        const struct InteractionOutput *a3,
        struct InteractionOutput *a4)
{
  unsigned int v8; // ebx
  const struct DEVICE_INFO *v9; // rax
  FLOAT v10; // xmm1_4
  FLOAT y; // xmm1_4
  struct D2D_POINT_2F v13; // [rsp+40h] [rbp-28h] BYREF
  struct D2D_POINT_2F v14; // [rsp+70h] [rbp+8h] BYREF

  v8 = 0;
  v9 = CPointerDeviceCache::Query(*((void **)this + 30));
  if ( *((_BYTE *)v9 + 48) )
  {
    CInteractionContextTransformHelper::TransformOutput(
      (CInteractionContextWrapper *)((char *)this + 328),
      a3,
      (const struct tagRECT *)v9 + 1,
      (const struct tagRECT *)v9,
      *((_DWORD *)this + 54),
      *((_BYTE *)this + 320),
      a4);
    v10 = *((float *)a4 + 11);
    v13.x = *((FLOAT *)a4 + 10);
    v13.y = v10;
    v14 = 0LL;
    CMILMatrix::Transform(a2, &v13, &v14, 1);
    y = v14.y;
    *((_DWORD *)a4 + 10) = LODWORD(v14.x);
    *((FLOAT *)a4 + 11) = y;
    *((_DWORD *)a4 + 1) = *((_DWORD *)a3 + 1);
    *(_DWORD *)a4 = *(_DWORD *)a3;
    *((_DWORD *)a4 + 5) = *((_DWORD *)a3 + 5);
  }
  else
  {
    return (unsigned int)-2147418113;
  }
  return v8;
}
