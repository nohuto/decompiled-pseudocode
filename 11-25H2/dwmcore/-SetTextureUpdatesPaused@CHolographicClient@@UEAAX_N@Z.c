/*
 * XREFs of ?SetTextureUpdatesPaused@CHolographicClient@@UEAAX_N@Z @ 0x1802DEEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicClient::SetTextureUpdatesPaused(CHolographicClient *this, char a2)
{
  *((_BYTE *)this + 200) = a2;
}
