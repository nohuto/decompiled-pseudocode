/*
 * XREFs of ??_GCSceneNodeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022CF80
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CSceneNodeMarshaler@DirectComposition@@UEAA@XZ @ 0x14022CC20 (--1CSceneNodeMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CSceneNodeMarshaler *__fastcall DirectComposition::CSceneNodeMarshaler::`scalar deleting destructor'(
        DirectComposition::CSceneNodeMarshaler *Buffer,
        char a2)
{
  DirectComposition::CSceneNodeMarshaler::~CSceneNodeMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
