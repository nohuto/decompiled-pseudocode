/*
 * XREFs of DpiDrtSetInternalPanelInfoCacheMux @ 0x140088AAC
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiDrtSetInternalPanelInfoCacheMux(__int64 a1)
{
  DISPLAY_MUX_MGR *v1; // r8
  _OWORD *v2; // rdx
  __int64 result; // rax

  v1 = qword_140161380;
  v2 = (_OWORD *)((char *)qword_140161380 + 149);
  *(_OWORD *)((char *)qword_140161380 + 149) = *(_OWORD *)(a1 + 12);
  v2[1] = *(_OWORD *)(a1 + 28);
  v2[2] = *(_OWORD *)(a1 + 44);
  v2[3] = *(_OWORD *)(a1 + 60);
  v2[4] = *(_OWORD *)(a1 + 76);
  v2[5] = *(_OWORD *)(a1 + 92);
  v2[6] = *(_OWORD *)(a1 + 108);
  v2 += 8;
  *(v2 - 1) = *(_OWORD *)(a1 + 124);
  *v2 = *(_OWORD *)(a1 + 140);
  v2[1] = *(_OWORD *)(a1 + 156);
  v2[2] = *(_OWORD *)(a1 + 172);
  v2[3] = *(_OWORD *)(a1 + 188);
  v2[4] = *(_OWORD *)(a1 + 204);
  *((_BYTE *)v2 + 80) = *(_BYTE *)(a1 + 220);
  result = 0LL;
  *((_BYTE *)v1 + 148) = 1;
  return result;
}
