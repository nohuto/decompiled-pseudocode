/*
 * XREFs of ??1CGenericPropertyList@DirectComposition@@QEAA@XZ @ 0x14010056C
 * Callers:
 *     ??_GCGenericMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140100530 (--_GCGenericMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall DirectComposition::CGenericPropertyList::~CGenericPropertyList(char ***this)
{
  char **v1; // rbx
  __int64 v3; // rsi

  v1 = *this;
  v3 = (__int64)&(*this)[(_QWORD)this[1]];
  while ( v1 != (char **)v3 )
    GreDeleteFastMutex(*v1++);
  GreDeleteFastMutex((char *)*this);
}
