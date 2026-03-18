/*
 * XREFs of ?NotifyOnChanged@CRenderData@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180202670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderData::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( ((a2 - 2) & 0xFFFFFFFD) == 0 )
  {
    a2 = 0;
LABEL_6:
    *(_BYTE *)(a1 + 296) = 1;
    return CResource::NotifyOnChanged((_DWORD *)a1, a2, a3);
  }
  if ( a2 == 1 )
  {
    a2 = 6;
    return CResource::NotifyOnChanged((_DWORD *)a1, a2, a3);
  }
  if ( a2 - 5 > 1 )
    goto LABEL_6;
  return CResource::NotifyOnChanged((_DWORD *)a1, a2, a3);
}
